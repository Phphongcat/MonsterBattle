using System;
using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Sheets
{
    public static class SheetExtensions
    {
        public static void AddLifecycleEvent(
            this Sheet self,
            Func<Memory<object>, UniTask> initialize = null,
            Func<UniTask> onWillEnter = null, Action onDidEnter = null,
            Func<UniTask> onWillExit = null, Action onDidExit = null,
            Func<UniTask> onCleanup = null,
            int priority = 0
        )
        {
            var lifecycleEvent = new AnonymousSheetLifecycleEvent(
                initialize,
                onWillEnter, onDidEnter,
                onWillExit, onDidExit,
                onCleanup
            );

            self.AddLifecycleEvent(lifecycleEvent, priority);
        }
    }
}