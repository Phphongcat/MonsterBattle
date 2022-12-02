using System;
using UnityScreenNavigator.Runtime.Core.Shared.Views;

namespace UnityScreenNavigator.Runtime.Core.Screens
{
    public readonly struct ScreenOptions
    {
        public readonly bool stack;
        public readonly WindowOptions options;

        public ScreenOptions(
              in WindowOptions options
            , bool stack = true
        )
        {
            this.options = options;
            this.stack = stack;
        }

        public ScreenOptions(
              string resourcePath
            , bool playAnimation = true
            , Action<Window> onLoaded = null
            , bool loadAsync = true
            , bool stack = true
        )
        {
            this.options = new(resourcePath, playAnimation, onLoaded, loadAsync);
            this.stack = stack;
        }

        public static implicit operator ScreenOptions(in WindowOptions options)
            => new(options);

        public static implicit operator ScreenOptions(string resourcePath)
            => new(new WindowOptions(resourcePath));

        public static implicit operator WindowOptions(in ScreenOptions options)
            => options.options;
    }
}
