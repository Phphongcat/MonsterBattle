using System;
using UnityScreenNavigator.Runtime.Core.Shared;

namespace UnityScreenNavigator.Runtime.Core.Activities
{
    public static class ActivityContainerExtensions
    {
        public static void AddCallbackReceiver(this ActivityContainer self,
            Action<Activity> onBeforeShow = null,
            Action<Activity> onAfterShow = null,
            Action<Activity> onBeforeHide = null,
            Action<Activity> onAfterHide = null)
        {
            var callbackReceiver =
                new AnonymousActivityContainerCallbackReceiver(onBeforeShow, onAfterShow, onBeforeHide, onAfterHide);
            self.AddCallbackReceiver(callbackReceiver);
        }
        
        public static void AddCallbackReceiver(this ActivityContainer self, Activity activity,
            Action<Activity> onBeforePush = null, Action<Activity> onAfterPush = null,
            Action<Activity> onBeforePop = null, Action<Activity> onAfterPop = null)
        {
            var callbackReceiver = new AnonymousActivityContainerCallbackReceiver();
            callbackReceiver.OnBeforeShow += x =>
            {
                if (x.Equals(activity))
                {
                    onBeforePush?.Invoke(x);
                }
            };
            callbackReceiver.OnAfterShow += x =>
            {
                if (x.Equals(activity))
                {
                    onAfterPush?.Invoke(x);
                }
            };
            callbackReceiver.OnBeforeHide += x =>
            {
                if (x.Equals(activity))
                {
                    onBeforePop?.Invoke(x);
                }
            };
            callbackReceiver.OnAfterHide += x =>
            {
                if (x.Equals(activity))
                {
                    onAfterPop?.Invoke(x);
                }
            };

            var gameObj = self.gameObject;
            if (!gameObj.TryGetComponent<MonoBehaviourDestroyedEventDispatcher>(out var destroyedEventDispatcher))
            {
                destroyedEventDispatcher = gameObj.AddComponent<MonoBehaviourDestroyedEventDispatcher>();
            }

            destroyedEventDispatcher.OnDispatch += () => self.RemoveCallbackReceiver(callbackReceiver);

            self.AddCallbackReceiver(callbackReceiver);
        }
    }
}