using Game.Scripts.Config;
using TigerForge;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Game.Scripts
{
    public class CharacterPool : MonoBehaviour
    {
        [SerializeField] private AttributeConfig configs;
        [SerializeField] private BattleTeamConfig teamConfig;
        [SerializeField] private PositionsConfig positions;


        private void Awake()
        {
            EventManager.StartListening(EventNameKeeper.InstantiateAsyncMonsters, CreateMonsters);
            EventManager.StartListening(EventNameKeeper.SelectMonsterTeam, SelectMonsterTeam);
            EventManager.StartListening(EventNameKeeper.StartBattle, SelectBattleTeam);
            EventManager.StartListening(EventNameKeeper.RemoveAllMonster, RemoveAllMonster);
        }

        private void SelectBattleTeam()
        {
            var owns = teamConfig.GetTeam();
            var enemies = teamConfig.GetEnemyTeam(configs);
            var unuseds = teamConfig.GetUnusedMonsters(configs);
            
            for (int i = 0; i < positions.ownBattlePositions.Count; i++)
            {
                var position = positions.ownBattlePositions[i];
                var monster = transform.Find(owns[i]);
                monster.transform.localScale = new Vector3(-1, 1, 1);
                monster.position = new Vector3(position.x, position.y, default);
            }
            for (int i = 0; i < positions.enemyBattlePositions.Count; i++)
            {
                var position = positions.enemyBattlePositions[i];
                var monster = transform.Find(enemies[i]);
                monster.position = new Vector3(position.x, position.y, default);
            }
            
            foreach (var monsterName in unuseds)
            {
                var monster = transform.Find(monsterName);
                Destroy(monster);
            }
        }
        
        private void SelectMonsterTeam()
        {
            var data = EventManager.GetData(EventNameKeeper.SelectMonsterTeam);
            var monsterName = (string) data;

            if (teamConfig.PickMonster(monsterName) is false)
            {
                if(teamConfig.RemoveMonster(monsterName) is false)
                    return;
                
                var removeIndex = teamConfig.CurrentIndexPick();
                var removePosition = positions.GetTempPosition(removeIndex);
                var reMonster = transform.Find(monsterName);
                reMonster.position = removePosition;
                return;
            }

            var currentIndex = teamConfig.CurrentIndexPick();
            var position = positions.selectTeamPositions[currentIndex];
            var monster = transform.Find(monsterName);
            
            positions.SetTempPosition(currentIndex, monster.position);
            monster.position = new Vector3(position.x, position.y, default);
        }

        private void CreateMonsters()
        {
            foreach (var monsterAttribute in configs.MonsterAttributes())
            {
                Addressables.InstantiateAsync(monsterAttribute.characterName, transform);
            }
        }

        private void RemoveAllMonster()
        {
            teamConfig.Release();
            configs.Release();
            positions.Release();
        }
    }
}
