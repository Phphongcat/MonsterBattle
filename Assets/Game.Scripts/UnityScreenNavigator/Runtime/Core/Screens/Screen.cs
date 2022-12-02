using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityScreenNavigator.Runtime.Core.Shared;
using UnityScreenNavigator.Runtime.Core.Shared.Views;
using UnityScreenNavigator.Runtime.Foundation;
using UnityScreenNavigator.Runtime.Foundation.Animation;
using UnityScreenNavigator.Runtime.Foundation.Coroutine;
using UnityScreenNavigator.Runtime.Foundation.PriorityCollection;

namespace UnityScreenNavigator.Runtime.Core.Screens
{
    [DisallowMultipleComponent]
    public class Screen : Window, IScreenLifecycleEvent
    {
        [SerializeField]
        private int _renderingOrder;

        [SerializeField]
        private ScreenTransitionAnimationContainer _animationContainer = new();

        private readonly PriorityList<IScreenLifecycleEvent> _lifecycleEvents = new();
        private Progress<float> _transitionProgressReporter;

        private Progress<float> TransitionProgressReporter
        {
            get
            {
                return _transitionProgressReporter ??= new Progress<float>(SetTransitionProgress);
            }
        }

        public ScreenTransitionAnimationContainer AnimationContainer => _animationContainer;

        public bool IsTransitioning { get; private set; }

        /// <summary>
        ///     Return the transition animation type currently playing.
        ///     If not in transition, return null.
        /// </summary>
        public ScreenTransitionAnimationType? TransitionAnimationType { get; private set; }

        /// <summary>
        ///     Progress of the transition animation.
        /// </summary>
        public float TransitionAnimationProgress { get; private set; }

        /// <summary>
        ///     Event when the transition animation progress changes.
        /// </summary>
        public event Action<float> TransitionAnimationProgressChanged;

        public virtual UniTask Initialize(Memory<object> args)
        {
            return UniTask.CompletedTask;
        }

        public virtual UniTask WillPushEnter()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidPushEnter()
        {
        }

        public virtual UniTask WillPushExit()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidPushExit()
        {
        }

        public virtual UniTask WillPopEnter()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidPopEnter()
        {
        }

        public virtual UniTask WillPopExit()
        {
            return UniTask.CompletedTask;
        }

        public virtual void DidPopExit()
        {
        }

        public virtual UniTask Cleanup()
        {
            return UniTask.CompletedTask;
        }

        public void AddLifecycleEvent(IScreenLifecycleEvent lifecycleEvent, int priority = 0)
        {
            _lifecycleEvents.Add(lifecycleEvent, priority);
        }

        public void RemoveLifecycleEvent(IScreenLifecycleEvent lifecycleEvent)
        {
            _lifecycleEvents.Remove(lifecycleEvent);
        }

        internal AsyncProcessHandle AfterLoad(RectTransform parentTransform, Memory<object> args)
        {
            _lifecycleEvents.Add(this, 0);
            SetIdentifer();

            Parent = parentTransform;
            RectTransform.FillParent((RectTransform)Parent);

            // Set order of rendering.
            var siblingIndex = 0;
            for (var i = 0; i < Parent.childCount; i++)
            {
                var child = Parent.GetChild(i);
                var childScreen = child.GetComponent<Screen>();
                siblingIndex = i;
                if (_renderingOrder >= childScreen._renderingOrder)
                {
                    continue;
                }

                break;
            }

            RectTransform.SetSiblingIndex(siblingIndex);
            
            Alpha = 0.0f;

            return CoroutineManager.Run<Screen>(
                CreateCoroutine(_lifecycleEvents.Select(x => x.Initialize(args)))
            );
        }


        internal AsyncProcessHandle BeforeEnter(bool push, Screen partnerScreen)
        {
            return CoroutineManager.Run<Screen>(BeforeEnterRoutine(push, partnerScreen));
        }

        private IEnumerator BeforeEnterRoutine(bool push, Screen partnerScreen)
        {
            IsTransitioning = true;
            TransitionAnimationType = push ? ScreenTransitionAnimationType.PushEnter : ScreenTransitionAnimationType.PopEnter;
            gameObject.SetActive(true);
            RectTransform.FillParent((RectTransform)Parent);
            SetTransitionProgress(0.0f);

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = false;
            }
            
            Alpha = 0.0f;

            var routines = push
                ? _lifecycleEvents.Select(x => x.WillPushEnter())
                : _lifecycleEvents.Select(x => x.WillPopEnter());
            var handle = CoroutineManager.Run<Screen>(CreateCoroutine(routines));

            while (!handle.IsTerminated)
            {
                yield return null;
            }
        }

        internal AsyncProcessHandle Enter(bool push, bool playAnimation, Screen partnerScreen)
        {
            return CoroutineManager.Run<Screen>(EnterRoutine(push, playAnimation, partnerScreen));
        }

        private IEnumerator EnterRoutine(bool push, bool playAnimation, Screen partnerScreen)
        {
            Alpha = 1.0f;

            if (playAnimation)
            {
                var anim = _animationContainer.GetAnimation(push, true, partnerScreen?.Identifier);
                if (anim == null)
                {
                    anim = UnityScreenNavigatorSettings.Instance.GetDefaultScreenTransitionAnimation(push, true);
                }

                anim.SetPartner(partnerScreen?.transform as RectTransform);
                anim.Setup(RectTransform);
                yield return CoroutineManager.Run<Screen>(anim.CreatePlayRoutine(TransitionProgressReporter));
            }

            RectTransform.FillParent((RectTransform)Parent);
            SetTransitionProgress(1.0f);
        }

        internal void AfterEnter(bool push, Screen partnerScreen)
        {
            if (push)
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidPushEnter();
                }
            }
            else
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidPopEnter();
                }
            }

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = true;
            }

            IsTransitioning = false;
            TransitionAnimationType = null;
        }

        internal AsyncProcessHandle BeforeExit(bool push, Screen partnerScreen)
        {
            return CoroutineManager.Run<Screen>(BeforeExitRoutine(push, partnerScreen));
        }

        private IEnumerator BeforeExitRoutine(bool push, Screen partnerScreen)
        {
            IsTransitioning = true;
            TransitionAnimationType = push ? ScreenTransitionAnimationType.PushExit : ScreenTransitionAnimationType.PopExit;
            gameObject.SetActive(true);
            RectTransform.FillParent((RectTransform)Parent);
            SetTransitionProgress(0.0f);

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = false;
            }
            
            Alpha = 1.0f;

            var routines = push
                ? _lifecycleEvents.Select(x => x.WillPushExit())
                : _lifecycleEvents.Select(x => x.WillPopExit());
            var handle = CoroutineManager.Run<Screen>(CreateCoroutine(routines));

            while (!handle.IsTerminated)
            {
                yield return null;
            }
        }

        internal AsyncProcessHandle Exit(bool push, bool playAnimation, Screen partnerScreen)
        {
            return CoroutineManager.Run<Screen>(ExitRoutine(push, playAnimation, partnerScreen));
        }

        private IEnumerator ExitRoutine(bool push, bool playAnimation, Screen partnerScreen)
        {
            if (playAnimation)
            {
                var anim = _animationContainer.GetAnimation(push, false, partnerScreen?.Identifier);
                if (anim == null)
                {
                    anim = UnityScreenNavigatorSettings.Instance.GetDefaultScreenTransitionAnimation(push, false);
                }

                anim.SetPartner(partnerScreen?.transform as RectTransform);
                anim.Setup(RectTransform);
                yield return CoroutineManager.Run<Screen>(anim.CreatePlayRoutine(TransitionProgressReporter));
            }
            
            Alpha = 0.0f;
            SetTransitionProgress(1.0f);
        }

        internal void AfterExit(bool push, Screen partnerScreen)
        {
            if (push)
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidPushExit();
                }
            }
            else
            {
                foreach (var lifecycleEvent in _lifecycleEvents)
                {
                    lifecycleEvent.DidPopExit();
                }
            }

            gameObject.SetActive(false);
            IsTransitioning = false;
            TransitionAnimationType = null;
        }

        internal AsyncProcessHandle BeforeRelease()
        {
            return CoroutineManager.Run<Screen>(CreateCoroutine(_lifecycleEvents.Select(x => x.Cleanup())));
        }

        private IEnumerator CreateCoroutine(IEnumerable<UniTask> targets)
        {
            foreach (var target in targets)
            {
                var handle = CoroutineManager.Run<Screen>(CreateCoroutine(target));
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
            WaitTaskAndCallback(target, () =>
            {
                isCompleted = true;
            });
            return new WaitUntil(() => isCompleted);
        }

        private void SetTransitionProgress(float progress)
        {
            TransitionAnimationProgress = progress;
            TransitionAnimationProgressChanged?.Invoke(progress);
        }
    }
}