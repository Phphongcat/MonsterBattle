using System;

namespace UnityScreenNavigator.Runtime.Core.Screens
{
    public sealed class AnonymousScreenContainerCallbackReceiver : IScreenContainerCallbackReceiver
    {
        public AnonymousScreenContainerCallbackReceiver(
            Action<(Screen enterScreen, Screen exitScreen)> onBeforePush = null,
            Action<(Screen enterScreen, Screen exitScreen)> onAfterPush = null,
            Action<(Screen enterScreen, Screen exitScreen)> onBeforePop = null,
            Action<(Screen enterScreen, Screen exitScreen)> onAfterPop = null)
        {
            OnBeforePush = onBeforePush;
            OnAfterPush = onAfterPush;
            OnBeforePop = onBeforePop;
            OnAfterPop = onAfterPop;
        }

        void IScreenContainerCallbackReceiver.BeforePush(Screen enterScreen, Screen exitScreen)
        {
            OnBeforePush?.Invoke((enterScreen, exitScreen));
        }

        void IScreenContainerCallbackReceiver.AfterPush(Screen enterScreen, Screen exitScreen)
        {
            OnAfterPush?.Invoke((enterScreen, exitScreen));
        }

        void IScreenContainerCallbackReceiver.BeforePop(Screen enterScreen, Screen exitScreen)
        {
            OnBeforePop?.Invoke((enterScreen, exitScreen));
        }

        void IScreenContainerCallbackReceiver.AfterPop(Screen enterScreen, Screen exitScreen)
        {
            OnAfterPop?.Invoke((enterScreen, exitScreen));
        }

        public event Action<(Screen enterScreen, Screen exitScreen)> OnAfterPop;
        public event Action<(Screen enterScreen, Screen exitScreen)> OnAfterPush;
        public event Action<(Screen enterScreen, Screen exitScreen)> OnBeforePop;
        public event Action<(Screen enterScreen, Screen exitScreen)> OnBeforePush;
    }
}