using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Activities
{
    public sealed class AnonymousActivityWindowLifecycleEvent : IActivityLifecycleEvent
    {
        public AnonymousActivityWindowLifecycleEvent(
            Func<Memory<object>, UniTask> initialize = null,
            Func<UniTask> onWillShowEnter = null, Action onDidShowEnter = null,
            Func<UniTask> onWillShowExit = null, Action onDidShowExit = null,
            Func<UniTask> onWillHideEnter = null, Action onDidHideEnter = null,
            Func<UniTask> onWillHideExit = null, Action onDidHideExit = null,
            Func<UniTask> onCleanup = null
        )
        {
            if (initialize != null)
                OnInitialize.Add(initialize);

            if (onWillShowEnter != null)
                OnWillShowEnter.Add(onWillShowEnter);

            OnDidShowEnter = onDidShowEnter;

            if (onWillShowExit != null)
                OnWillShowExit.Add(onWillShowExit);

            OnDidShowExit = onDidShowExit;

            if (onWillHideEnter != null)
                OnWillHideEnter.Add(onWillHideEnter);

            OnDidHideEnter = onDidHideEnter;

            if (onWillHideExit != null)
                OnWillHideExit.Add(onWillHideExit);

            OnDidHideExit = onDidHideExit;

            if (onCleanup != null)
                OnCleanup.Add(onCleanup);
        }

        public List<Func<Memory<object>, UniTask>> OnInitialize { get; } = new();

        public List<Func<UniTask>> OnWillShowEnter { get; } = new();

        public List<Func<UniTask>> OnWillShowExit { get; } = new();

        public List<Func<UniTask>> OnWillHideEnter { get; } = new();

        public List<Func<UniTask>> OnWillHideExit { get; } = new();

        public List<Func<UniTask>> OnCleanup { get; } = new();

        async UniTask IActivityLifecycleEvent.Initialize(Memory<object> args)
        {
            foreach (var onInitialize in OnInitialize)
                await onInitialize.Invoke(args);
        }

        async UniTask IActivityLifecycleEvent.WillShowEnter()
        {
            foreach (var onWillShowEnter in OnWillShowEnter)
                await onWillShowEnter.Invoke();
        }

        void IActivityLifecycleEvent.DidShowEnter()
        {
            OnDidShowEnter?.Invoke();
        }

        async UniTask IActivityLifecycleEvent.WillShowExit()
        {
            foreach (var onWillShowExit in OnWillShowExit)
                await onWillShowExit.Invoke();
        }

        void IActivityLifecycleEvent.DidShowExit()
        {
            OnDidShowExit?.Invoke();
        }

        async UniTask IActivityLifecycleEvent.WillHideEnter()
        {
            foreach (var onWillHideEnter in OnWillHideEnter)
                await onWillHideEnter.Invoke();
        }

        void IActivityLifecycleEvent.DidHideEnter()
        {
            OnDidHideEnter?.Invoke();
        }

        async UniTask IActivityLifecycleEvent.WillHideExit()
        {
            foreach (var onWillHideExit in OnWillHideExit)
                await onWillHideExit.Invoke();
        }

        void IActivityLifecycleEvent.DidHideExit()
        {
            OnDidHideExit?.Invoke();
        }

        async UniTask IActivityLifecycleEvent.Cleanup()
        {
            foreach (var onCleanup in OnCleanup)
                await onCleanup.Invoke();
        }

        public event Action OnDidShowEnter;
        public event Action OnDidShowExit;
        public event Action OnDidHideEnter;
        public event Action OnDidHideExit;
    }
}