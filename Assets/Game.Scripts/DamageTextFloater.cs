using Cysharp.Threading.Tasks;
using Game.Scripts;
using Game.Scripts.Config;
using TigerForge;
using UnityEngine;
using UnityEngine.UI;

public class DamageTextFloater : MonoBehaviour
{
    [SerializeField] private Slider slider;
    [SerializeField] private FloatText textPrefabs;
    [SerializeField] private BattleTeamConfig teamConfig;
    [SerializeField] private AttributeConfig config;
    
    
    void Start()
    {
        slider.onValueChanged.AddListener(OnValueChanged);
    }

    private async void OnValueChanged(float arg0)
    {
        slider.onValueChanged.RemoveListener(OnValueChanged);
        
        var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
        var attribute = teamConfig.BattleSort(config)[index];

        var text = Instantiate(textPrefabs, transform);
        text.transform.localScale = transform.parent.localScale;
        text.Active(attribute.attackDamage.ToString());

        await UniTask.Delay(500);
        
        Destroy(text.gameObject);
        
        EventManager.StartListening(EventNameKeeper.StartTurn, OnStartTurn);
    }

    private void OnStartTurn()
    {
        EventManager.StopListening(EventNameKeeper.StartTurn, OnStartTurn);
        slider.onValueChanged.AddListener(OnValueChanged);
    }
}
