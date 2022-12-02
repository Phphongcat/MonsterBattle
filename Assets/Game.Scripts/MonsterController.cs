using Cysharp.Threading.Tasks;
using DG.Tweening;
using Game.Scripts.Config;
using TigerForge;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts
{
    public class MonsterController : MonoBehaviour
    {
        [SerializeField] private BattleTeamConfig teamConfig;
        [SerializeField] private AttributeConfig config;
        [SerializeField] private Slider slider;

        private MonsterAttribute _monsterAttribute;
        private int _currentHealth;
        private bool _isClocked;
        private bool _canTouchAll;
        
        
        private void Awake()
        {
            gameObject.name = gameObject.name.Replace("(Clone)", "");
            if (_monsterAttribute is null)
                _monsterAttribute = config.GetMonster(gameObject.name);

            _currentHealth = _monsterAttribute.health;
            _isClocked = false;

            slider.value = (float)_currentHealth / _monsterAttribute.health;
            slider.gameObject.SetActive(false);

            CanTouchAll();
            
            EventManager.StartListening(EventNameKeeper.StartTurn, OnStartTurn);
            EventManager.StartListening(EventNameKeeper.CanTouchAll, CanTouchAll);
            EventManager.StartListening(EventNameKeeper.StartBattle, StartBattle);
            EventManager.StartListening(EventNameKeeper.AttackMonster, AttackMonster);
            EventManager.StartListening(EventNameKeeper.RemoveAllMonster, RemoveAllMonster);
        }

        private void AttackMonster()
        {
            var monsterName = (string) EventManager.GetData(EventNameKeeper.AttackMonster);
            if(monsterName != gameObject.name)
                return;
            
            GetDamage();
        }

        private void StartBattle()
        {
            EventManager.StopListening(EventNameKeeper.StartBattle, StartBattle);
            slider.gameObject.SetActive(true);
        }

        private void CanTouchAll()
        {
            var data = EventManager.GetData(EventNameKeeper.CanTouchAll);
            _canTouchAll = data is null || (bool) data;
        }

        private void OnStartTurn()
        {
            var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
            var attribute = teamConfig.BattleSort(config)[index];
            
            if (attribute.characterName != gameObject.name)
            {
                if (teamConfig.GetTeam().Contains(attribute.characterName))
                    _isClocked = teamConfig.GetTeam().Contains(gameObject.name);
                else
                    _isClocked = teamConfig.GetEnemyTeam(config).Contains(gameObject.name);
            }
            else
            {
                _isClocked = true;

                if (teamConfig.GetEnemyTeam(config).Contains(gameObject.name))
                {
                    var ai = gameObject.GetOrAddComponent<EnemyAI>();
                    ai.SetConfig(teamConfig, config);
                    ai.Active();
                }
            }
        }

        private void OnMouseUpAsButton()
        {
            if(_isClocked || _canTouchAll is false)
                return;

            if(teamConfig.isBattle is false)
                EventManager.EmitEventData(EventNameKeeper.SelectMonsterTeam, _monsterAttribute.characterName);
            else
                GetDamage();
        }

        public async void GetDamage()
        {
            var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
            var attribute = teamConfig.BattleSort(config)[index];

            if(attribute.characterName == gameObject.name)
                return;
                
            var parent = transform.parent;
            var startMonster = parent.Find(attribute.characterName);
            var skillObject = Instantiate(attribute.skillObject, parent);
            var delayTimer = skillObject.GetDelayTimer();
            var speed = skillObject.GetSpeed();
                
            skillObject.Active(startMonster, transform);
                
            EventManager.EmitEventData(EventNameKeeper.CanTouchAll, false);

            await UniTask.Delay((int) (speed * 1000));

            _currentHealth -= attribute.attackDamage;
            slider.DOValue(_currentHealth < (float) default
                ? default
                : (float) _currentHealth / _monsterAttribute.health, speed).SetEase(Ease.Linear);

            await UniTask.Delay(delayTimer - (int) (speed * 1000));

            var isDie = false;
            if (_currentHealth <= (int) default)
            {
                isDie = true;
                config.MonsterAttributes().Find(value => value.characterName == gameObject.name).isDie = true;
            }
                
            EventManager.EmitEventData(EventNameKeeper.CanTouchAll, true);
            EventManager.EmitEvent(EventNameKeeper.DoneTurn);

            if (isDie)
                Destroy(gameObject);
        }

        private void RemoveAllMonster()
        {
            Destroy(gameObject);
        }
    }
}
