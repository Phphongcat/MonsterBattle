using System;

namespace Game.Scripts.Config
{
    [Serializable]
    public class MonsterAttribute 
    {
        public string characterName;
        public int health;
        public int attackDamage;
        public float speed;
        public bool isDie;
        public ParticlesObject skillObject;
    }
}
