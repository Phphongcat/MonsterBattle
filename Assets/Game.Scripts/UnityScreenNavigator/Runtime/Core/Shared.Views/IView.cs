using UnityEngine;

namespace UnityScreenNavigator.Runtime.Core.Shared.Views
{
    public interface IView
    {
        string Name { get; set; }

        bool ActiveSelf { get; set; }

        RectTransform RectTransform { get; }

        float Alpha { get; set; }

        bool Interactable { get; set; }

        CanvasGroup CanvasGroup { get; }
        
        Transform Parent { get; }

        GameObject Owner { get; }
    }
}