using Game.Scripts.Config;
using TigerForge;
using TMPro;
using UnityEngine;

namespace Game.Scripts
{
    public class BattleHandler : MonoBehaviour
    {
        [SerializeField] private AttributeConfig config;
        [SerializeField] private BattleTeamConfig teamConfig;
        [SerializeField] private int turnCurrent;

        [Header("UI")]
        [SerializeField] private TMP_Text text;
        [SerializeField] private string format = "Turn {0}";
        
        [Header("Debug")]
        [SerializeField] private int turnNumber;

        private bool _isWinGame;


        private void Awake()
        {
            turnCurrent = default;
            turnNumber = -1;
        }

        private void Start()
        {
            OnStartTurn();
            EventManager.StartListening(EventNameKeeper.DoneTurn, OnStartTurn);
        }

        private void OnStartTurn()
        {
            if (IsBattleEnd())
            {
                EventManager.EmitEventData(EventNameKeeper.EndBattle, _isWinGame);
                return;
            }
            
            turnCurrent++;
            
            text.SetText(format, turnCurrent);

            turnNumber++;

            if (turnNumber >= teamConfig.BattleSort(config).Count)
            {
                turnNumber = default;
            }

            if (teamConfig.BattleSort(config)[turnNumber].isDie)
            {
                for (int i = 0; i < teamConfig.BattleSort(config).Count; i++)
                {
                    if (teamConfig.BattleSort(config)[i].isDie is false)
                    {
                        turnNumber = i;
                        EventManager.EmitEventData(EventNameKeeper.StartTurn, turnNumber);
                        return;
                    }
                }
            }

            EventManager.EmitEventData(EventNameKeeper.StartTurn, turnNumber);
        }

        private bool IsBattleEnd()
        {
            var ownNumber = teamConfig.GetTeam().Count;
            var enemyNumber = teamConfig.GetEnemyTeam(config).Count;
            
            foreach (var monsterName in teamConfig.GetTeam())
            {
                ownNumber = config.GetMonster(monsterName).isDie ? ownNumber - 1 : ownNumber;
            }
            if (ownNumber <= (int) default)
                return true;
            
            foreach (var monsterName in teamConfig.GetEnemyTeam(config))
            {
                enemyNumber = config.GetMonster(monsterName).isDie ? enemyNumber -1 : enemyNumber;
            }
            if (enemyNumber <= (int) default)
            {
                _isWinGame = true;
                return true;
            }
            
            return false;
        }
    }
}
