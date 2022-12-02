using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Sheets
{
    public sealed class AnonymousSheetLifecycleEvent : ISheetLifecycleEvent
    {
        public AnonymousSheetLifecycleEvent(
            Func<Memory<object>, UniTask> initialize = null,
            Func<UniTask> onWillEnter = null, Action onDidEnter = null,
            Func<UniTask> onWillExit = null, Action onDidExit = null,
            Func<UniTask> onCleanup = null
        )
        {
            if (initialize != null)
                OnInitialize.Add(initialize);

            if (onWillEnter != null)
                OnWillEnter.Add(onWillEnter);

            OnDidEnter = onDidEnter;

            if (onWillExit != null)
                OnWillExit.Add(onWillExit);

            OnDidExit = onDidExit;

            if (onCleanup != null)
                OnCleanup.Add(onCleanup);
        }

        public List<Func<Memory<object>, UniTask>> OnInitialize { get; } = new();
        public List<Func<UniTask>> OnWillEnter { get; } = new();
        public List<Func<UniTask>> OnWillExit { get; } = new();
        public List<Func<UniTask>> OnCleanup { get; } = new();

        async UniTask ISheetLifecycleEvent.Initialize(Memory<object> args)
        {
            foreach (var onInitialize in OnInitialize)
                await onInitialize.Invoke(args);
        }

        async UniTask ISheetLifecycleEvent.WillEnter()
        {
            foreach (var onWillEnter in OnWillEnter)
                await onWillEnter.Invoke();
        }

        void ISheetLifecycleEvent.DidEnter()
        {
            OnDidEnter?.Invoke();
        }

        async UniTask ISheetLifecycleEvent.WillExit()
        {
            foreach (var onWillExit in OnWillExit)
                await onWillExit.Invoke();
        }

        void ISheetLifecycleEvent.DidExit()
        {
            OnDidExit?.Invoke();
        }

        async UniTask ISheetLifecycleEvent.Cleanup()
        {
            foreach (var onCleanup in OnCleanup)
                await onCleanup.Invoke();
        }

        public event Action OnDidEnter;
        public event Action OnDidExit;
    }
}