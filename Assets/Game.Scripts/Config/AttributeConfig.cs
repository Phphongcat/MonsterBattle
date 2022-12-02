using System.Collections.Generic;
using UnityEngine;

namespace Game.Scripts.Config
{
    [CreateAssetMenu(fileName = nameof(AttributeConfig), menuName = "Config/Attribute")]
    public class AttributeConfig : ScriptableObject
    {
        [SerializeField] private List<MonsterAttribute> monsterAttributes;


        public List<MonsterAttribute> MonsterAttributes() => monsterAttributes;

        public MonsterAttribute GetMonster(string nameMonster)
        {
            var monsterAttribute = monsterAttributes.Find(attribute => attribute.characterName == nameMonster);
            return monsterAttribute;
        }

        private void OnDisable()
        {
            Release();
        }

        public void Release()
        {
            foreach (var value in monsterAttributes)
            {
                value.isDie = false;
            }
        }
    }
}
