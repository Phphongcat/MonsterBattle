using System;
using UnityScreenNavigator.Runtime.Core.Shared.Views;
using UnityScreenNavigator.Runtime.Foundation;

namespace UnityScreenNavigator.Runtime.Core.Activities
{
    public readonly struct ActivityOptions
    {
        public readonly SortingLayerId? sortingLayer;
        public readonly int? orderInLayer;
        public readonly WindowOptions options;

        public ActivityOptions(
            in WindowOptions options
            , SortingLayerId? sortingLayer = null
            , int? orderInLayer = null
        )
        {
            this.options = options;
            this.sortingLayer = sortingLayer;
            this.orderInLayer = orderInLayer;
        }

        public ActivityOptions(
              string resourcePath
            , bool playAnimation = true
            , Action<Window> onLoaded = null
            , bool loadAsync = true
            , SortingLayerId? sortingLayer = null
            , int? orderInLayer = null
        )
        {
            this.options = new(resourcePath, playAnimation, onLoaded, loadAsync);
            this.sortingLayer = sortingLayer;
            this.orderInLayer = orderInLayer;
        }

        public static implicit operator ActivityOptions(in WindowOptions options)
            => new(options);

        public static implicit operator ActivityOptions(string resourcePath)
            => new(new WindowOptions(resourcePath));

        public static implicit operator WindowOptions(in ActivityOptions options)
            => options.options;
    }
}
