using Game.Scripts;
using Game.Scripts.Config;
using TigerForge;
using UnityEngine;
using UnityEngine.UI;

public class FocusItem : MonoBehaviour
{
    [SerializeField] private GameObject focusImage;
    [SerializeField] private GameObject selectedImage;
    [SerializeField] private BattleTeamConfig teamConfig;
    [SerializeField] private AttributeConfig config;


    private void Start()
    {
        focusImage.gameObject.SetActive(false);
        selectedImage.gameObject.SetActive(false);
        
        EventManager.StartListening(EventNameKeeper.StartTurn, OnStartTurn);
    }

    private void OnStartTurn()
    {
        var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
        var attribute = teamConfig.BattleSort(config)[index];
            
        if (attribute.characterName != gameObject.name)
        {
            selectedImage.gameObject.SetActive(false);
            if (teamConfig.GetTeam().Contains(attribute.characterName))
            {
                var isClocked = teamConfig.GetTeam().Contains(gameObject.name);
                focusImage.gameObject.SetActive(isClocked is false);
            }
            else
            {
                var isClocked = teamConfig.GetEnemyTeam(config).Contains(gameObject.name);
                focusImage.gameObject.SetActive(isClocked is false);
            }
        }
        else
        {
            selectedImage.gameObject.SetActive(true);
            focusImage.gameObject.SetActive(false);
        }
    }
}
