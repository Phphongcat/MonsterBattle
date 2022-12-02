using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Game.Scripts.Config
{
    [CreateAssetMenu(fileName = nameof(BattleTeamConfig), menuName = "Config/Team")]
    public class BattleTeamConfig : ScriptableObject
    {
        public bool isBattle;
        
        [SerializeField] private int teamMaxCount;
        
        [Header("Debug")] 
        [SerializeField] private int currentIndexPick;
        [SerializeField] private List<string> teams = new();
        [SerializeField] private List<string> enemies = new();
        [SerializeField] private string monsterNameGetTurn = string.Empty;


        public bool PickMonster(string nameMonster)
        {
            if (teams.Count < teamMaxCount)
            {
                for (int i = 1; i <= teamMaxCount - teams.Count; i++)
                {
                    teams.Add("");
                }
            }

            var contains = teams.Contains(nameMonster);
            if(contains)
                return false;
            
            for (int i = 0; i < teams.Count; i++)
            {
                if (string.IsNullOrEmpty(teams[i]))
                {
                    teams[i] = nameMonster;
                    currentIndexPick = i;
                    return true;
                }
            }

            return false;
        }

        public bool RemoveMonster(string nameMonster)
        {
            var contains = teams.Contains(nameMonster);
            if(contains is false)
                return false;
            
            for (int i = 0; i < teams.Count; i++)
            {
                if (teams[i].Contains(nameMonster))
                {
                    teams[i] = "";
                    currentIndexPick = i;
                    return true;
                }
            }

            return false;
        }

        private void OnDisable()
        {
            Release();
        }

        public void Release()
        {
            isBattle = false;
            currentIndexPick = 0;
            teams.Clear();
            enemies.Clear();
            monsterNameGetTurn = string.Empty;
        }

        public List<string> GetEnemyTeam(AttributeConfig config)
        {
            enemies.Clear();
            for (int i = 0; i < config.MonsterAttributes().Count; i++)
            {
                if (teams.Contains(config.MonsterAttributes()[i].characterName) is false)
                {
                    enemies.Add(config.MonsterAttributes()[i].characterName);
                }
                if (enemies.Count >= teamMaxCount)
                    return enemies;
            }

            return enemies;
        }

        public List<string> GetUnusedMonsters(AttributeConfig config)
        {
            var total = new List<string>();
            foreach (var value in config.MonsterAttributes())
            {
                total.Add(value.characterName);
            }
            
            foreach (var monster in teams)
            {
                if (total.Contains(monster))
                    total.Remove(monster);
            }
            foreach (var monster in enemies)
            {
                if (total.Contains(monster))
                    total.Remove(monster);
            }

            return total;
        }

        public List<MonsterAttribute> BattleSort(AttributeConfig config)
        {
            var total = new List<MonsterAttribute>();
            foreach (var value in config.MonsterAttributes())
            {
                if (teams.Contains(value.characterName) || enemies.Contains(value.characterName))
                {
                    total.Add(value);
                }
            }

            var order = from s in total orderby s.speed descending select s;
            return order.ToList();
        }
        
        public bool IsFullTeam()
        {
            return teams.Any() && teams.All(monster => string.IsNullOrEmpty(monster) is false);
        }

        public int CurrentIndexPick() => currentIndexPick;

        public List<string> GetTeam() => teams;
        
        public int MaxCount() => teamMaxCount;
    }
}
