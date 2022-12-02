using System;

namespace UnityScreenNavigator.Runtime.Core.Shared.Views
{
    public readonly struct WindowOptions
    {
        public readonly bool loadAsync;
        public readonly bool playAnimation;
        public readonly string resourcePath;
        public readonly Action<Window> onLoaded;

        public WindowOptions(
            string resourcePath
            , bool playAnimation = true
            , Action<Window> onLoaded = null
            , bool loadAsync = true
        )
        {
            this.loadAsync = loadAsync;
            this.playAnimation = playAnimation;
            this.resourcePath = resourcePath;
            this.onLoaded = onLoaded;
        }

        public static implicit operator WindowOptions(string resourcePath)
            => new(resourcePath);
    }
}