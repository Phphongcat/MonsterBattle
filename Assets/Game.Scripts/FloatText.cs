using DG.Tweening;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

[RequireComponent(typeof(TMP_Text))]
public class FloatText : MonoBehaviour
{
    [SerializeField] private TMP_Text text;


    private void Awake()
    {
        text ??= gameObject.GetOrAddComponent<TMP_Text>();
    }

    public void Active(string content)
    {
        text.SetText(content);

        var position = text.transform.position;
        var endPosition = new Vector3(position.x + 0.5f, position.y + 0.5f, position.z);
        
        text.transform.DOMove(endPosition, 0.5f).SetEase(Ease.Linear);
    }
}
