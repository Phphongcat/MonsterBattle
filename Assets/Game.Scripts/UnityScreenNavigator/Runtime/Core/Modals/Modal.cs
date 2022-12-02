using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityScreenNavigator.Runtime.Core.Shared;
using UnityScreenNavigator.Runtime.Core.Shared.Views;
using UnityScreenNavigator.Runtime.Foundation;
using UnityScreenNavigator.Runtime.Foundation.Animation;
using UnityScreenNavigator.Runtime.Foundation.Coroutine;
using UnityScreenNavigator.Runtime.Foundation.PriorityCollection;

using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Modals
{
    [DisallowMultipleComponent]
    public class Modal : Window, IModalLifecycleEvent
    {
        [SerializeField]
        private ModalTransitionAnimationContainer _animationContainer = new();

        private readonly PriorityList<IModalLifecycleEvent> _lifecycleEvents = new();
        private Progress<float> _transitionProgressReporter;

        private Progress<float> TransitionProgressReporter
        {
            get
            {
                return _transitionProgressReporter ??= new Progress<float>(SetTransitionProgress);
            }
        }

        public ModalTransitionAnimationContainer AnimationContainer => _animationContainer;

        public bool IsTransitioning { get; private set; }

        /// <summary>
        ///     Return the transition animation type currently playing.
        ///     If not in transition, return null.
        /// </summary>
        public ModalTransitionAnimationType? TransitionAnimationType { get; private set; }

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

        public void AddLifecycleEvent(IModalLifecycleEvent lifecycleEvent, int priority = 0)
        {
            _lifecycleEvents.Add(lifecycleEvent, priority);
        }

        public void RemoveLifecycleEvent(IModalLifecycleEvent lifecycleEvent)
        {
            _lifecycleEvents.Remove(lifecycleEvent);
        }

        internal AsyncProcessHandle AfterLoad(RectTransform parentTransform, Memory<object> args)
        {
            _lifecycleEvents.Add(this, 0);
            SetIdentifer();

            Parent = parentTransform;
            RectTransform.FillParent((RectTransform)Parent);

            Alpha = 0.0f;

            return CoroutineManager.Run<Modal>(
                CreateCoroutine(_lifecycleEvents.Select(x => x.Initialize(args)))
            );
        }

        internal AsyncProcessHandle BeforeEnter(bool push, Modal partnerModal)
        {
            return CoroutineManager.Run<Modal>(BeforeEnterRoutine(push, partnerModal));
        }

        private IEnumerator BeforeEnterRoutine(bool push, Modal partnerModal)
        {
            IsTransitioning = true;

            if (push)
            {
                TransitionAnimationType = ModalTransitionAnimationType.Enter;
                gameObject.SetActive(true);
                RectTransform.FillParent((RectTransform)Parent);
                Alpha = 0.0f;
            }

            SetTransitionProgress(0.0f);

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = false;
            }

            var routines = push
                ? _lifecycleEvents.Select(x => x.WillPushEnter())
                : _lifecycleEvents.Select(x => x.WillPopEnter());
            var handle = CoroutineManager.Run<Modal>(CreateCoroutine(routines));

            while (!handle.IsTerminated)
            {
                yield return null;
            }
        }

        internal AsyncProcessHandle Enter(bool push, bool playAnimation, Modal partnerModal)
        {
            return CoroutineManager.Run<Modal>(EnterRoutine(push, playAnimation, partnerModal));
        }

        private IEnumerator EnterRoutine(bool push, bool playAnimation, Modal partnerModal)
        {
            if (push)
            {
                Alpha = 1.0f;

                if (playAnimation)
                {
                    var anim = _animationContainer.GetAnimation(true, partnerModal?.Identifier);
                    if (anim == null)
                    {
                        anim = UnityScreenNavigatorSettings.Instance.GetDefaultModalTransitionAnimation(true);
                    }

                    anim.SetPartner(partnerModal?.transform as RectTransform);
                    anim.Setup(RectTransform);
                    yield return CoroutineManager.Run<Modal>(anim.CreatePlayRoutine(TransitionProgressReporter));
                }

                RectTransform.FillParent((RectTransform)Parent);
            }
        }

        internal void AfterEnter(bool push, Modal partnerModal)
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

        internal AsyncProcessHandle BeforeExit(bool push, Modal partnerModal)
        {
            return CoroutineManager.Run<Modal>(BeforeExitRoutine(push, partnerModal));
        }

        private IEnumerator BeforeExitRoutine(bool push, Modal partnerModal)
        {
            IsTransitioning = true;

            if (!push)
            {
                TransitionAnimationType = ModalTransitionAnimationType.Exit;
                gameObject.SetActive(true);
                RectTransform.FillParent((RectTransform)Parent);
                Alpha = 1.0f;
            }

            SetTransitionProgress(0.0f);

            if (!UnityScreenNavigatorSettings.Instance.EnableInteractionInTransition)
            {
                Interactable = false;
            }

            var routines = push
                ? _lifecycleEvents.Select(x => x.WillPushExit())
                : _lifecycleEvents.Select(x => x.WillPopExit());
            var handle = CoroutineManager.Run<Modal>(CreateCoroutine(routines));

            while (!handle.IsTerminated)
            {
                yield return null;
            }
        }

        internal AsyncProcessHandle Exit(bool push, bool playAnimation, Modal partnerModal)
        {
            return CoroutineManager.Run<Modal>(ExitRoutine(push, playAnimation, partnerModal));
        }

        private IEnumerator ExitRoutine(bool push, bool playAnimation, Modal partnerModal)
        {
            if (!push)
            {
                if (playAnimation)
                {
                    var anim = _animationContainer.GetAnimation(false, partnerModal?.Identifier);
                    if (anim == null)
                    {
                        anim = UnityScreenNavigatorSettings.Instance.GetDefaultModalTransitionAnimation(false);
                    }

                    anim.SetPartner(partnerModal?.transform as RectTransform);
                    anim.Setup(RectTransform);
                    yield return CoroutineManager.Run<Modal>(anim.CreatePlayRoutine(TransitionProgressReporter));
                }
                
                Alpha = 0.0f;
            }

            SetTransitionProgress(1.0f);
        }

        internal void AfterExit(bool push, Modal partnerModal)
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

            IsTransitioning = false;
            TransitionAnimationType = null;
        }

        internal AsyncProcessHandle BeforeRelease()
        {
            return CoroutineManager.Run<Modal>(CreateCoroutine(_lifecycleEvents.Select(x => x.Cleanup())));
        }

        private IEnumerator CreateCoroutine(IEnumerable<UniTask> targets)
        {
            foreach (var target in targets)
            {
                var handle = CoroutineManager.Run<Modal>(CreateCoroutine(target));
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