using System;

namespace UnityScreenNavigator.Runtime.Core.Activities
{
    public class AnonymousActivityContainerCallbackReceiver: IActivityContainerCallbackReceiver
    {
        public AnonymousActivityContainerCallbackReceiver(
            Action<Activity> onBeforeShow = null,
            Action<Activity> onAfterShow = null,
            Action<Activity> onBeforeHide = null,
            Action<Activity> onAfterHide = null)
        {
            OnBeforeShow = onBeforeShow;
            OnAfterShow = onAfterShow;
            OnBeforeHide = onBeforeHide;
            OnAfterHide = onAfterHide;
        }

        void IActivityContainerCallbackReceiver.BeforeShow(Activity activity)
        {
            OnBeforeShow?.Invoke(activity);
        }

        void IActivityContainerCallbackReceiver.AfterShow(Activity activity)
        {
            OnAfterShow?.Invoke(activity);
        }

        void IActivityContainerCallbackReceiver.BeforeHide(Activity activity)
        {
            OnBeforeHide?.Invoke(activity);
        }

        void IActivityContainerCallbackReceiver.AfterHide(Activity activity)
        {
            OnAfterHide?.Invoke(activity);
        }

        public event Action<Activity> OnAfterHide;
        public event Action<Activity> OnAfterShow;
        public event Action<Activity> OnBeforeHide;
        public event Action<Activity> OnBeforeShow;

    }
}