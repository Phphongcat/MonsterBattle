using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityScreenNavigator.Runtime.Core.Shared;
using UnityScreenNavigator.Runtime.Core.Shared.Views;
using UnityScreenNavigator.Runtime.Foundation;
using UnityScreenNavigator.Runtime.Foundation.AssetLoaders;
using UnityScreenNavigator.Runtime.Foundation.Collections;
using UnityScreenNavigator.Runtime.Foundation.Coroutine;

namespace UnityScreenNavigator.Runtime.Core.Screens
{
    [RequireComponent(typeof(RectMask2D))]
    public sealed class ScreenContainer : ContainerLayer
    {
        private static readonly Dictionary<int, ScreenContainer> InstanceCacheByTransform = new();
        private static readonly Dictionary<string, ScreenContainer> InstanceCacheByName = new();
        private readonly Dictionary<int, AssetLoadHandle<GameObject>> _assetLoadHandles = new();
        private readonly List<IScreenContainerCallbackReceiver> _callbackReceivers = new();
        private readonly List<Screen> _screens = new();
        private readonly Dictionary<string, AssetLoadHandle<GameObject>> _preloadedResourceHandles = new();

        private bool _isActiveScreenStacked;
        private IAssetLoader _assetLoader;

        /// <summary>
        ///     By default, <see cref="IAssetLoader" /> in <see cref="UnityScreenNavigatorSettings" /> is used.
        ///     If this property is set, it is used instead.
        /// </summary>
        public IAssetLoader AssetLoader
        {
            get => _assetLoader ?? UnityScreenNavigatorSettings.Instance.AssetLoader;
            set => _assetLoader = value ?? throw new ArgumentNullException(nameof(value));
        }

        /// <summary>
        /// True if in transition.
        /// </summary>
        public bool IsInTransition { get; private set; }

        /// <summary>
        /// Stacked screens.
        /// </summary>
        public IReadOnlyList<Screen> Screens => _screens;

        public Window Current => _screens[^1];

        protected override void Awake()
        {
            _callbackReceivers.AddRange(GetComponents<IScreenContainerCallbackReceiver>());

        }

        protected override void OnDestroy()
        {
            foreach (var screen in _screens)
            {
                var screenId = screen.GetInstanceID();
                var assetLoadHandle = _assetLoadHandles[screenId];

                Destroy(screen.gameObject);
                AssetLoader.Release(assetLoadHandle);
            }

            _assetLoadHandles.Clear();

            InstanceCacheByName.Remove(LayerName);

            using var keysToRemove = new ValueList<int>(4);

            foreach (var cache in InstanceCacheByTransform)
            {
                if (Equals(cache.Value))
                {
                    keysToRemove.Add(cache.Key);
                }
            }

            foreach (var keyToRemove in keysToRemove)
            {
                InstanceCacheByTransform.Remove(keyToRemove);
            }
        }

        #region STATIC_METHODS

        /// <summary>
        /// Get the <see cref="ScreenContainer" /> that manages the screen to which <see cref="transform" /> belongs.
        /// </summary>
        /// <param name="transform"></param>
        /// <param name="useCache">Use the previous result for the <see cref="transform" />.</param>
        /// <returns></returns>
        public static ScreenContainer Of(Transform transform, bool useCache = true)
        {
            return Of((RectTransform) transform, useCache);
        }

        /// <summary>
        /// Get the <see cref="ScreenContainer" /> that manages the screen to which <see cref="rectTransform" /> belongs.
        /// </summary>
        /// <param name="rectTransform"></param>
        /// <param name="useCache">Use the previous result for the <see cref="rectTransform" />.</param>
        /// <returns></returns>
        public static ScreenContainer Of(RectTransform rectTransform, bool useCache = true)
        {
            var id = rectTransform.GetInstanceID();
            if (useCache && InstanceCacheByTransform.TryGetValue(id, out var container))
            {
                return container;
            }

            container = rectTransform.GetComponentInParent<ScreenContainer>();
            if (container != null)
            {
                InstanceCacheByTransform.Add(id, container);
                return container;
            }

            return null;
        }

        /// <summary>
        /// Find the <see cref="ScreenContainer" /> of <see cref="containerName" />.
        /// </summary>
        /// <param name="containerName"></param>
        /// <returns></returns>
        public static ScreenContainer Find(string containerName)
        {
            if (InstanceCacheByName.TryGetValue(containerName, out var instance))
            {
                return instance;
            }

            return null;
        }

        /// <summary>
        /// Find the <see cref="ScreenContainer" /> of <see cref="containerName" />.
        /// </summary>
        /// <param name="containerName"></param>
        /// <returns></returns>
        public static bool TryFind(string containerName, out ScreenContainer container)
        {
            container = null;

            if (InstanceCacheByName.TryGetValue(containerName, out var instance))
            {
                container = instance;
            }

            return container;
        }

        /// <summary>
        /// Create a new <see cref="ScreenContainer"/> as a layer.
        /// </summary>
        /// <param name="layerName"></param>
        /// <param name="layer"></param>
        /// <param name="layerType"></param>
        /// <returns></returns>
        public static async UniTask<ScreenContainer> CreateAsync(ContainerLayerConfig layerConfig, IContainerLayerManager manager)
        {
            var root = new GameObject(
                  layerConfig.name
                , typeof(Canvas)
                , typeof(GraphicRaycaster)
                , typeof(CanvasGroup)
            );

            var rectTransform = root.GetOrAddComponent<RectTransform>();
            rectTransform.anchorMin = Vector2.zero;
            rectTransform.anchorMax = Vector2.one;
            rectTransform.offsetMax = Vector2.zero;
            rectTransform.offsetMin = Vector2.zero;
            rectTransform.pivot = new Vector2(0.5f, 0.5f);
            rectTransform.localPosition = Vector3.zero;

            var container = root.AddComponent<ScreenContainer>();
            await container.InitializeAsync(layerConfig, manager);
            
            if (!string.IsNullOrWhiteSpace(layerConfig.name))
            {
                InstanceCacheByName.Add(layerConfig.name, container);
            }

            return container;
        }

        #endregion

        /// <summary>
        /// Add a callback receiver.
        /// </summary>
        /// <param name="callbackReceiver"></param>
        public void AddCallbackReceiver(IScreenContainerCallbackReceiver callbackReceiver)
        {
            _callbackReceivers.Add(callbackReceiver);
        }

        /// <summary>
        ///     Remove a callback receiver.
        /// </summary>
        /// <param name="callbackReceiver"></param>
        public void RemoveCallbackReceiver(IScreenContainerCallbackReceiver callbackReceiver)
        {
            _callbackReceivers.Remove(callbackReceiver);
        }

        /// <summary>
        ///     Push new page.
        /// </summary>
        /// <param name="resourcePath"></param>
        /// <param name="playAnimation"></param>
        /// <param name="stack"></param>
        /// <param name="onLoad"></param>
        /// <param name="loadAsync"></param>
        /// <typeparam name="TScreen"></typeparam>
        /// <returns></returns>
        public AsyncProcessHandle Push<TScreen>(ScreenOptions options, params object[] args)
            where TScreen : Screen
        {
            return CoroutineManager.Run<Screen>(PushRoutine<TScreen>(options, args));
        }

        /// <summary>
        /// Push new screen.
        /// </summary>
        /// <param name="options"></param>
        /// <returns></returns>
        public AsyncProcessHandle Push(ScreenOptions options, params object[] args)
        {
            return CoroutineManager.Run<Screen>(PushRoutine<Screen>(options, args));
        }

        /// <summary>
        /// Pop current screen.
        /// </summary>
        /// <param name="playAnimation"></param>
        /// <returns></returns>
        public AsyncProcessHandle Pop(bool playAnimation)
        {
            return CoroutineManager.Run<Screen>(PopRoutine(playAnimation));
        }

        private IEnumerator PushRoutine<TScreen>(ScreenOptions options, Memory<object> args)
            where TScreen : Screen
        {
            var resourcePath = options.options.resourcePath;

            if (resourcePath == null)
            {
                throw new ArgumentNullException(nameof(resourcePath));
            }

            if (IsInTransition)
            {
                throw new InvalidOperationException(
                    $"Cannot transition because there is a screen already in transition.");
            }

            IsInTransition = true;

            // Setup
            var assetLoadHandle = options.options.loadAsync
                ? AssetLoader.LoadAsync<GameObject>(resourcePath)
                : AssetLoader.Load<GameObject>(resourcePath);
            if (!assetLoadHandle.IsDone)
            {
                yield return new WaitUntil(() => assetLoadHandle.IsDone);
            }

            if (assetLoadHandle.Status == AssetLoadStatus.Failed)
            {
                throw assetLoadHandle.OperationException;
            }

            var instance = Instantiate(assetLoadHandle.Result);

            if (instance.TryGetComponent<TScreen>(out var enterScreen) == false)
            {
                throw new InvalidOperationException(
                    $"Cannot transition because {typeof(TScreen).Name} component is not attached to the specified resource \"{resourcePath}\".");
            }

            var screenId = enterScreen.GetInstanceID();
            _assetLoadHandles.Add(screenId, assetLoadHandle);
            options.options.onLoaded?.Invoke(enterScreen);

            var afterLoadHandle = enterScreen.AfterLoad((RectTransform)transform, args);

            while (!afterLoadHandle.IsTerminated)
            {
                yield return null;
            }

            var exitScreen = _screens.Count == 0 ? null : _screens[^1];
            var exitScreenId = exitScreen == null ? (int?) null : exitScreen.GetInstanceID();

            // Preprocess
            foreach (var callbackReceiver in _callbackReceivers)
            {
                callbackReceiver.BeforePush(enterScreen, exitScreen);
            }

            using var preprocessHandles = new ValueList<AsyncProcessHandle>(2);
            if (exitScreen != null)
            {
                preprocessHandles.Add(exitScreen.BeforeExit(true, enterScreen));
            }

            preprocessHandles.Add(enterScreen.BeforeEnter(true, exitScreen));

            foreach (var coroutineHandle in preprocessHandles)
            {
                while (!coroutineHandle.IsTerminated)
                {
                    yield return coroutineHandle;
                }
            }

            // Play Animations
            using var animationHandles = new ValueList<AsyncProcessHandle>(2);
            if (exitScreen != null)
            {
                animationHandles.Add(exitScreen.Exit(true, options.options.playAnimation, enterScreen));
            }

            animationHandles.Add(enterScreen.Enter(true, options.options.playAnimation, exitScreen));

            foreach (var coroutineHandle in animationHandles)
            {
                while (!coroutineHandle.IsTerminated)
                {
                    yield return coroutineHandle;
                }
            }

            // End Transition
            if (!_isActiveScreenStacked && exitScreenId.HasValue)
            {
                _screens.RemoveAt(_screens.Count - 1);
            }

            _screens.Add(enterScreen);
            IsInTransition = false;

            // Postprocess
            if (exitScreen != null)
            {
                exitScreen.AfterExit(true, enterScreen);
            }

            enterScreen.AfterEnter(true, exitScreen);

            foreach (var callbackReceiver in _callbackReceivers)
            {
                callbackReceiver.AfterPush(enterScreen, exitScreen);
            }

            // Unload Unused Screen
            if (!_isActiveScreenStacked && exitScreenId.HasValue)
            {
                var beforeReleaseHandle = exitScreen.BeforeRelease();
                while (!beforeReleaseHandle.IsTerminated)
                {
                    yield return null;
                }

                var handle = _assetLoadHandles[exitScreenId.Value];
                AssetLoader.Release(handle);

                Destroy(exitScreen.gameObject);
                _assetLoadHandles.Remove(exitScreenId.Value);
            }

            _isActiveScreenStacked = options.stack;
        }

        private IEnumerator PopRoutine(bool playAnimation)
        {
            if (_screens.Count == 0)
            {
                throw new InvalidOperationException(
                    "Cannot transition because there is no screen loaded on the stack.");
            }

            if (IsInTransition)
            {
                throw new InvalidOperationException(
                    "Cannot transition because there is a screen already in transition.");
            }

            IsInTransition = true;

            var exitScreen = _screens[^1];
            var exitScreenId = exitScreen.GetInstanceID();
            var enterScreen = _screens.Count == 1 ? null : _screens[^2];

            // Preprocess
            foreach (var callbackReceiver in _callbackReceivers)
            {
                callbackReceiver.BeforePop(enterScreen, exitScreen);
            }

            using var preprocessHandles = new ValueList<AsyncProcessHandle>(2);
            preprocessHandles.Add(exitScreen.BeforeExit(false, enterScreen));

            if (enterScreen != null)
            {
                preprocessHandles.Add(enterScreen.BeforeEnter(false, exitScreen));
            }

            foreach (var coroutineHandle in preprocessHandles)
            {
                while (!coroutineHandle.IsTerminated)
                {
                    yield return coroutineHandle;
                }
            }

            // Play Animations
            using var animationHandles = new ValueList<AsyncProcessHandle>(2);
            animationHandles.Add(exitScreen.Exit(false, playAnimation, enterScreen));

            if (enterScreen != null)
            {
                animationHandles.Add(enterScreen.Enter(false, playAnimation, exitScreen));
            }

            foreach (var coroutineHandle in animationHandles)
            {
                while (!coroutineHandle.IsTerminated)
                {
                    yield return coroutineHandle;
                }
            }

            // End Transition
            _screens.RemoveAt(_screens.Count - 1);
            IsInTransition = false;

            // Postprocess
            exitScreen.AfterExit(false, enterScreen);
            if (enterScreen != null)
            {
                enterScreen.AfterEnter(false, exitScreen);
            }

            foreach (var callbackReceiver in _callbackReceivers)
            {
                callbackReceiver.AfterPop(enterScreen, exitScreen);
            }

            // Unload Unused Screen
            var beforeReleaseHandle = exitScreen.BeforeRelease();
            while (!beforeReleaseHandle.IsTerminated)
            {
                yield return null;
            }

            var loadHandle = _assetLoadHandles[exitScreenId];
            Destroy(exitScreen.gameObject);
            AssetLoader.Release(loadHandle);
            _assetLoadHandles.Remove(exitScreenId);

            _isActiveScreenStacked = true;
        }

        public AsyncProcessHandle Preload(string resourcePath, bool loadAsync = true)
        {
            return CoroutineManager.Run<Screen>(PreloadRoutine(resourcePath, loadAsync));
        }

        private IEnumerator PreloadRoutine(string resourcePath, bool loadAsync = true)
        {
            if (_preloadedResourceHandles.ContainsKey(resourcePath))
            {
                throw new InvalidOperationException(
                    $"The resource {resourcePath} has already been preloaded.");
            }

            var assetLoadHandle = loadAsync
                ? AssetLoader.LoadAsync<GameObject>(resourcePath)
                : AssetLoader.Load<GameObject>(resourcePath);
            _preloadedResourceHandles.Add(resourcePath, assetLoadHandle);

            if (!assetLoadHandle.IsDone)
            {
                yield return new WaitUntil(() => assetLoadHandle.IsDone);
            }

            if (assetLoadHandle.Status == AssetLoadStatus.Failed)
            {
                throw assetLoadHandle.OperationException;
            }
        }

        public bool IsPreloadRequested(string resourcePath)
        {
            return _preloadedResourceHandles.ContainsKey(resourcePath);
        }

        public bool IsPreloaded(string resourcePath)
        {
            if (!_preloadedResourceHandles.TryGetValue(resourcePath, out var handle))
            {
                return false;
            }

            return handle.Status == AssetLoadStatus.Success;
        }

        public void ReleasePreloaded(string resourcePath)
        {
            if (!_preloadedResourceHandles.ContainsKey(resourcePath))
            {
                throw new InvalidOperationException($"The resource {resourcePath} is not preloaded.");
            }

            var handle = _preloadedResourceHandles[resourcePath];
            _preloadedResourceHandles.Remove(resourcePath);
            AssetLoader.Release(handle);
        }
    }
}