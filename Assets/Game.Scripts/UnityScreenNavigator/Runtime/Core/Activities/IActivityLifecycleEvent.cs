using System;
using Cysharp.Threading.Tasks;

namespace UnityScreenNavigator.Runtime.Core.Activities
{
    public interface IActivityLifecycleEvent
    {
        /// <summary>
        /// Call this method after the activity is loaded.
        /// </summary>
        /// <returns></returns>
        UniTask Initialize(Memory<object> args);

        /// <summary>
        /// Called just before this activity is displayed by the Show transition.
        /// </summary>
        /// <returns></returns>
        UniTask WillShowEnter();

        /// <summary>
        /// Called just after this activity is displayed by the Show transition.
        /// </summary>
        void DidShowEnter();

        /// <summary>
        /// Called just before this activity is hidden by the Show transition.
        /// </summary>
        /// <returns></returns>
        UniTask WillShowExit();

        /// <summary>
        /// Called just after this activity is hidden by the Show transition.
        /// </summary>
        void DidShowExit();

        /// <summary>
        ///         /// <summary>
        /// Called just before this activity is displayed by the Hide transition.
        /// </summary>
        /// <returns></returns>
        /// </summary>
        /// <returns></returns>
        UniTask WillHideEnter();

        /// <summary>
        /// Called just after this activity is displayed by the Hide transition.
        /// </summary>
        void DidHideEnter();

        /// <summary>
        /// Called just before this activity is hidden by the Hide transition.
        /// </summary>
        /// <returns></returns>
        UniTask WillHideExit();

        /// <summary>
        /// Called just after this activity is hidden by the Hide transition.
        /// </summary>
        void DidHideExit();

        /// <summary>
        /// Called just before this activity is released.
        /// </summary>
        /// <returns></returns>
        UniTask Cleanup();
    }
}