using System.Collections.Generic;
using System.Linq;
using Game.Scripts;
using Game.Scripts.Config;
using TigerForge;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{
    [SerializeField] private BattleTeamConfig teamConfig;
    [SerializeField] private AttributeConfig config;

    
    public void SetConfig(BattleTeamConfig team, AttributeConfig attribute)
    {
        teamConfig = team;
        config = attribute;
    }

    public void Active()
    {
        var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
        var attribute = teamConfig.BattleSort(config)[index];
        
        if(attribute.characterName != gameObject.name)
            return;

        if (OwnAlive().Any() is false)
            return;

        var rand = Random.Range(default, OwnAlive().Count - 1);
        EventManager.EmitEventData(EventNameKeeper.AttackMonster, OwnAlive()[rand]);

    }

    private List<string> OwnAlive()
    {
        var newList = new List<string>();

        foreach (var value in teamConfig.GetTeam())
        {
            if (config.GetMonster(value).isDie is false)
            {
                newList.Add(value);
            }
        }

        return newList;
    }
}
