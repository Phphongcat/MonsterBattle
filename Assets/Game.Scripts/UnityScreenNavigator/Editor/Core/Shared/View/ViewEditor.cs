using UnityEditor;

namespace UnityScreenNavigator.Runtime.Core.Shared.Views
{
    [CustomEditor(typeof(View))]
    public class ViewEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            if (target is View view)
            {
                var _ = view.CanvasGroup;
            }
        }
    }
}
