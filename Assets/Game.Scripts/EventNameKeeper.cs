using System;

namespace Game.Scripts
{
    [Serializable]
    public static class EventNameKeeper
    {
        public const string ScreenContainer = "ScreenContainer";
        public const string ModalContainer = "ModalContainer";
        public const string TeamSelectScreen = "TeamSelectScreen";
        public const string BattleScreen = "BattleScreen";
        public const string DamageText = "DamageText";
        public const string EndGameModal = "EndGameModal";
        
        public const string StartBattle = "StartBattle";
        public const string EndBattle = "EndBattle";
        public const string InstantiateAsyncMonsters = "InstantiateAsyncMonsters";
        public const string SelectMonsterTeam = "SelectMonsterTeam";
        public const string AttackMonster = "AttackMonster"; // data: string
        public const string StartTurn = "StartTurn"; // data: int
        public const string DoneTurn = "DoneTurn"; 
        public const string CanTouchAll = "CanTouchAll"; 
        public const string RemoveAllMonster = "RemoveAllMonster"; 
    }
}
