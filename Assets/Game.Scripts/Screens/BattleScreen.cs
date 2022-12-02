using Game.Scripts.Config;
using TigerForge;
using TMPro;
using UnityEngine;
using UnityScreenNavigator.Runtime.Core.Modals;
using Screen = UnityScreenNavigator.Runtime.Core.Screens.Screen;

namespace Game.Scripts.Screens
{
    public class BattleScreen : Screen
    {
        [SerializeField] private BattleTeamConfig teamConfig;
        [SerializeField] private TMP_Text text;
        [SerializeField] private string format = "{0}s";
        [SerializeField] private int countdown;


        private int _currentCountdown;
        
        public override void DidPushEnter()
        {
            teamConfig.isBattle = true;
            _currentCountdown = default;

            EventManager.EmitEvent(EventNameKeeper.StartBattle);
            
            EventManager.StartListening(EventNameKeeper.StartTurn, StartTurn);
            EventManager.StartListening(EventNameKeeper.DoneTurn, DoneTurn);
            EventManager.StartListening(EventNameKeeper.CanTouchAll, DoneTurn);
            EventManager.StartListening(EventNameKeeper.EndBattle, OnEndBattle);
        }

        private void OnEndBattle()
        {
            ModalContainer.Find(EventNameKeeper.ModalContainer).Push(EventNameKeeper.EndGameModal);
        }

        private void StartTurn()
        {
            _currentCountdown = countdown;
            text.SetText(format, _currentCountdown);
            InvokeRepeating(nameof(CountDown), default, 1);
        }
        
        private void DoneTurn()
        {
            if(IsInvoking(nameof(CountDown)))
            {
                _currentCountdown = default;
                CancelInvoke(nameof(CountDown));
            }
        }

        private void CountDown()
        {
            _currentCountdown--;
            
            text.SetText(format, _currentCountdown);
            
            if (_currentCountdown <= (int) default)
            {
                _currentCountdown = default;
                CancelInvoke(nameof(CountDown));
                EventManager.EmitEvent(EventNameKeeper.DoneTurn);
            }
        }
    }
}
