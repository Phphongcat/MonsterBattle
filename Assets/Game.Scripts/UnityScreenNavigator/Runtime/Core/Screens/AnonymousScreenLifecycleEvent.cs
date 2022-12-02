using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Screens
{
    public sealed class AnonymousScreenLifecycleEvent : IScreenLifecycleEvent
    {
        public AnonymousScreenLifecycleEvent(
            Func<Memory<object>, UniTask> initialize = null,
            Func<UniTask> onWillPushEnter = null, Action onDidPushEnter = null,
            Func<UniTask> onWillPushExit = null, Action onDidPushExit = null,
            Func<UniTask> onWillPopEnter = null, Action onDidPopEnter = null,
            Func<UniTask> onWillPopExit = null, Action onDidPopExit = null,
            Func<UniTask> onCleanup = null
        )
        {
            if (initialize != null)
                OnInitialize.Add(initialize);

            if (onWillPushEnter != null)
                OnWillPushEnter.Add(onWillPushEnter);

            OnDidPushEnter = onDidPushEnter;

            if (onWillPushExit != null)
                OnWillPushExit.Add(onWillPushExit);

            OnDidPushExit = onDidPushExit;

            if (onWillPopEnter != null)
                OnWillPopEnter.Add(onWillPopEnter);

            OnDidPopEnter = onDidPopEnter;

            if (onWillPopExit != null)
                OnWillPopExit.Add(onWillPopExit);

            OnDidPopExit = onDidPopExit;

            if (onCleanup != null)
                OnCleanup.Add(onCleanup);
        }

        public List<Func<Memory<object>, UniTask>> OnInitialize { get; } = new();

        public List<Func<UniTask>> OnWillPushEnter { get; } = new();

        public List<Func<UniTask>> OnWillPushExit { get; } = new();

        public List<Func<UniTask>> OnWillPopEnter { get; } = new();

        public List<Func<UniTask>> OnWillPopExit { get; } = new();

        public List<Func<UniTask>> OnCleanup { get; } = new();

        async UniTask IScreenLifecycleEvent.Initialize(Memory<object> args)
        {
            foreach (var onInitialize in OnInitialize)
                await onInitialize.Invoke(args);
        }

        async UniTask IScreenLifecycleEvent.WillPushEnter()
        {
            foreach (var onWillPushEnter in OnWillPushEnter)
                await onWillPushEnter.Invoke();
        }

        void IScreenLifecycleEvent.DidPushEnter()
        {
            OnDidPushEnter?.Invoke();
        }

        async UniTask IScreenLifecycleEvent.WillPushExit()
        {
            foreach (var onWillPushExit in OnWillPushExit)
                await onWillPushExit.Invoke();
        }

        void IScreenLifecycleEvent.DidPushExit()
        {
            OnDidPushExit?.Invoke();
        }

        async UniTask IScreenLifecycleEvent.WillPopEnter()
        {
            foreach (var onWillPopEnter in OnWillPopEnter)
                await onWillPopEnter.Invoke();
        }

        void IScreenLifecycleEvent.DidPopEnter()
        {
            OnDidPopEnter?.Invoke();
        }

        async UniTask IScreenLifecycleEvent.WillPopExit()
        {
            foreach (var onWillPopExit in OnWillPopExit)
                await onWillPopExit.Invoke();
        }

        void IScreenLifecycleEvent.DidPopExit()
        {
            OnDidPopExit?.Invoke();
        }

        async UniTask IScreenLifecycleEvent.Cleanup()
        {
            foreach (var onCleanup in OnCleanup)
                await onCleanup.Invoke();
        }

        public event Action OnDidPushEnter;
        public event Action OnDidPushExit;
        public event Action OnDidPopEnter;
        public event Action OnDidPopExit;
    }
}