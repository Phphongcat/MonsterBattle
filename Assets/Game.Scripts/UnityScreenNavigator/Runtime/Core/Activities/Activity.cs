using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityScreenNavigator.Runtime.Core.Shared;
using UnityScreenNavigator.Runtime.Core.Shared.Views;
using UnityScreenNavigator.Runtime.Foundation;
using UnityScreenNavigator.Runtime.Foundation.Animation;
using UnityScreenNavigator.Runtime.Foundation.Coroutine;
using UnityScreenNavigator.Runtime.Foundation.PriorityCollection;

namespace UnityScreenNavigator.Runtime.Core.Activities
{
    [DisallowMultipleComponent]
    public class Activity : Window, IActivityLifecycleEvent
    {
        [SerializeField]
        private ActivityTransitionAnimationContainer _animationContainer = new();

        private readonly PriorityList<IActivityLifecycleEvent> _lifecycleEvents = new();
        private Progress<float> _transitionProgressReporter;

        private Progress<float> TransitionProgressReporter
        {
            get
            {
                return _transitionProgressReporter ??= new Progress<float>(SetTransitionProgress);
            }
        }

        public ActivityTransitionAnimationContainer AnimationContainer => _animationContainer;

        public bool IsTransitioning { get; private set; }

        /// <summary>
        ///     Return the transition animation type currently playing.
        ///     If not in transition, return null.
        /// </summary>
        public ActivityTransitionAnimationType? TransitionAnimationType { get; private set; }

        /// <summary>
        ///     Progress of the transition animation.
        /// </summary>
        public float TransitionAnimationProgress { get; private set; }

        /// <summary>
        ///     Event when the transition animation progress changes.
        /// </summary>
        public event Action<float> TransitionAnimationProgressChanged;

        public void SetSortingLayer(SortingLayerId? layer, int? sortingOrder)
        {
            if ((layer.HasValue & sortingOrder.HasValue) == false)
            {
                return;
            }

            var canvas = this.GetOrAddComponent<Canvas>();
            var _ = this.GetOrAddComponent<GraphicRaycaster>();

            canvas.overrideSorting = true;

            if (layer.HasValue)
                canvas.sortingLayerID = layer.Value.id;

            if (sortingOrder.HasValue)
                canvas.sortingOrder = sortingOrder.Value;
        }

        public virtual UniTask Initialize(Memory<object> args)
        {
            return UniTask.CompletedTask;
        }

        public virtual UniTask WillShowEnter()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidShowEnter()
        {
        }

        public virtual UniTask WillShowExit()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidShowExit()
        {
        }

        public virtual UniTask WillHideEnter()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidHideEnter()
        {
        }
        
        public virtual UniTask WillHideExit()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidHideExit()
        {
        }

        public virtual UniTask Cleanup()
        {
            return UniTask.CompletedTask;
        }

        public void AddLifecycleEvent(IActivityLifecycleEvent lifecycleEvent, int priority = 0)
        {
            _lifecycleEvents.Add(lifecycleEvent, priority);
        }

        public void RemoveLifecycleEvent(IActivityLifecycleEvent lifecycleEvent)
        {
            _lifecycleEvents.Remove(lifecycleEvent);
        }

        internal AsyncProcessHandle AfterLoad(RectTransform parentTransform, Memory<object> args)
        {
            _lifecycleEvents.Add(this, 0);
            SetIdentifer();

            Parent = parentTransform;
            RectTransform.FillParent((RectTransform) Parent);
            Alpha = 0.0f;

            return CoroutineManager.Run<Activity>(
                CreateCoroutine(_lifecycleEvents.Select(x => x.Initialize(args)))
            );
        }

        internal AsyncProcessHandle BeforeEnter(bool show)
        {
            return CoroutineManager.Run<Activity>(BeforeEnterRoutine(show));
        }

        private IEnumerator BeforeEnterRoutine(bool show)
        {
            IsTransitioning = true;
            TransitionAnimationType = show ? ActivityTransitionAnimationType.ShowEnter : ActivityTransitionAnimationType.HideEnter;
            gameObject.SetActive(true);
            RectTransform.FillParent((RectTransform)Parent);
            SetTransitionProgress(0.0f);

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = false;
            }

            Alpha = 0.0f;

            var routines = show
                ? _lifecycleEvents.Select(x => x.WillShowEnter())
                : _lifecycleEvents.Select(x => x.WillHideEnter());
            var handle = CoroutineManager.Run<Activity>(CreateCoroutine(routines));

            while (!handle.IsTerminated)
            {
                yield return null;
            }
        }

        internal AsyncProcessHandle Enter(bool show, bool playAnimation)
        {
            return CoroutineManager.Run<Activity>(EnterRoutine(show, playAnimation));
        }

        private IEnumerator EnterRoutine(bool show, bool playAnimation)
        {
            Alpha = 1.0f;

            if (playAnimation)
            {
                var anim = _animationContainer.GetAnimation(show);
                if (anim == null)
                {
                    anim = UnityScreenNavigatorSettings.Instance.GetDefaultActivityTransitionAnimation(show);
                }

                anim.Setup(RectTransform);
                yield return CoroutineManager.Run<Activity>(anim.CreatePlayRoutine(TransitionProgressReporter));
            }

            RectTransform.FillParent((RectTransform)Parent);
            SetTransitionProgress(1.0f);
        }

        internal void AfterEnter(bool show)
        {
            if (show)
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidShowEnter();
                }
            }
            else
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidHideEnter();
                }
            }

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = true;
            }

            IsTransitioning = false;
            TransitionAnimationType = null;
        }

        internal AsyncProcessHandle BeforeExit(bool show)
        {
            return CoroutineManager.Run<Activity>(BeforeExitRoutine(show));
        }

        private IEnumerator BeforeExitRoutine(bool show)
        {
            IsTransitioning = true;
            TransitionAnimationType = show ? ActivityTransitionAnimationType.ShowExit : ActivityTransitionAnimationType.HideExit;
            gameObject.SetActive(true);
            RectTransform.FillParent((RectTransform)Parent);
            SetTransitionProgress(0.0f);

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = false;
            }

            Alpha = 1.0f;

            var routines = show
                ? _lifecycleEvents.Select(x => x.WillShowExit())
                : _lifecycleEvents.Select(x => x.WillHideExit());
            var handle = CoroutineManager.Run<Activity>(CreateCoroutine(routines));

            while (!handle.IsTerminated)
            {
                yield return null;
            }
        }

        internal AsyncProcessHandle Exit(bool show, bool playAnimation)
        {
            return CoroutineManager.Run<Activity>(ExitRoutine(show, playAnimation));
        }

        private IEnumerator ExitRoutine(bool show, bool playAnimation)
        {
            if (playAnimation)
            {
                var anim = _animationContainer.GetAnimation(show);
                if (anim == null)
                {
                    anim = UnityScreenNavigatorSettings.Instance.GetDefaultActivityTransitionAnimation(show);
                }

                anim.Setup(RectTransform);
                yield return CoroutineManager.Run<Activity>(anim.CreatePlayRoutine(TransitionProgressReporter));
            }

            Alpha = 0.0f;
            SetTransitionProgress(1.0f);
        }

        internal void AfterExit(bool show, Activity partnerActivity)
        {
            if (show)
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidShowExit();
                }
            }
            else
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidHideExit();
                }
            }

            gameObject.SetActive(false);
            IsTransitioning = false;
            TransitionAnimationType = null;
        }

        internal AsyncProcessHandle BeforeRelease()
        {
            return CoroutineManager.Run<Activity>(CreateCoroutine(_lifecycleEvents.Select(x => x.Cleanup())));
        }

        private IEnumerator CreateCoroutine(IEnumerable<UniTask> targets)
        {
            foreach (var target in targets)
            {
                var handle = CoroutineManager.Run<Activity>(CreateCoroutine(target));
                if (!handle.IsTerminated)
                {
                    yield return handle;
                }
            }
        }

        private IEnumerator CreateCoroutine(UniTask target)
        {
            async void WaitTaskAndCallback(UniTask task, Action callback)
            {
                await task;
                callback?.Invoke();
            }

            var isCompleted = false;
            WaitTaskAndCallback(target, () => { isCompleted = true; });
            return new WaitUntil(() => isCompleted);
        }

        private void SetTransitionProgress(float progress)
        {
            TransitionAnimationProgress = progress;
            TransitionAnimationProgressChanged?.Invoke(progress);
        }
    }
}