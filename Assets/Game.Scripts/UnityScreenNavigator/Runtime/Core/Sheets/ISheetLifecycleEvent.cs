using System;
using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Sheets
{
    public interface ISheetLifecycleEvent
    {
        UniTask Initialize(Memory<object> args);

        UniTask WillEnter();

        void DidEnter();

        UniTask WillExit();

        void DidExit();

        UniTask Cleanup();
    }
}