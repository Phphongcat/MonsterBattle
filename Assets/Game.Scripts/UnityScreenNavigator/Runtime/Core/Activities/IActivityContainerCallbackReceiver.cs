namespace UnityScreenNavigator.Runtime.Core.Activities
{
    public interface IActivityContainerCallbackReceiver
    {
        void BeforeShow(Activity activity);

        void AfterShow(Activity activity);

        void BeforeHide(Activity activity);

        void AfterHide(Activity activity);
    }
}