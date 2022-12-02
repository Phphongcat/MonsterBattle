using Game.Scripts.Config;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityScreenNavigator.Runtime.Core.Screens;
using UnityScreenNavigator.Runtime.Core.Shared.Views;

namespace Game.Scripts
{
    public class PlayBattleButton : MonoBehaviour
    {
        [SerializeField] private Button button;
        [SerializeField] private BattleTeamConfig config;


        private void Awake()
        {
            button ??= gameObject.GetOrAddComponent<Button>();
            button.onClick.AddListener(ChangeToBattle);
        }

        private void Update()
        {
            button.interactable = config.IsFullTeam();
        }

        private void OnDisable()
        {
            Destroy(gameObject);
        }

        private void ChangeToBattle()
        {
            ScreenContainer.Find(EventNameKeeper.ScreenContainer).Pop(false);
            
            var options = new WindowOptions(EventNameKeeper.BattleScreen, false, loadAsync: false);
            ScreenContainer.Find(EventNameKeeper.ScreenContainer).Push(options);
        }
    }
}
