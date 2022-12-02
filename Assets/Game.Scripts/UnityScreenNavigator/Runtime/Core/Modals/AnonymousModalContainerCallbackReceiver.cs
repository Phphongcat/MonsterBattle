using System;

namespace UnityScreenNavigator.Runtime.Core.Modals
{
    public sealed class AnonymousModalContainerCallbackReceiver : IModalContainerCallbackReceiver
    {
        public AnonymousModalContainerCallbackReceiver(
            Action<(Modal enterModal, Modal exitModal)> onBeforePush = null,
            Action<(Modal enterModal, Modal exitModal)> onAfterPush = null,
            Action<(Modal enterModal, Modal exitModal)> onBeforePop = null,
            Action<(Modal enterModal, Modal exitModal)> onAfterPop = null)
        {
            OnBeforePush = onBeforePush;
            OnAfterPush = onAfterPush;
            OnBeforePop = onBeforePop;
            OnAfterPop = onAfterPop;
        }

        void IModalContainerCallbackReceiver.BeforePush(Modal enterModal, Modal exitModal)
        {
            OnBeforePush?.Invoke((enterModal, exitModal));
        }

        void IModalContainerCallbackReceiver.AfterPush(Modal enterModal, Modal exitModal)
        {
            OnAfterPush?.Invoke((enterModal, exitModal));
        }

        void IModalContainerCallbackReceiver.BeforePop(Modal enterModal, Modal exitModal)
        {
            OnBeforePop?.Invoke((enterModal, exitModal));
        }

        void IModalContainerCallbackReceiver.AfterPop(Modal enterModal, Modal exitModal)
        {
            OnAfterPop?.Invoke((enterModal, exitModal));
        }

        public event Action<(Modal enterModal, Modal exitModal)> OnAfterPop;
        public event Action<(Modal enterModal, Modal exitModal)> OnAfterPush;
        public event Action<(Modal enterModal, Modal exitModal)> OnBeforePop;
        public event Action<(Modal enterModal, Modal exitModal)> OnBeforePush;
    }
}