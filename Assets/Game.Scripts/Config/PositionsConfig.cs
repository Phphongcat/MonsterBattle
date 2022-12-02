using System.Collections.Generic;
using UnityEngine;

namespace Game.Scripts.Config
{
    [CreateAssetMenu(fileName = nameof(PositionsConfig), menuName = "Config/Positions")]
    public class PositionsConfig : ScriptableObject
    {
        public List<Vector2> ownBattlePositions;
        public List<Vector2> enemyBattlePositions;
        public List<Vector2> selectTeamPositions;

        [Header("Debug")] 
        public int limit = 3;
        public List<Vector3> tempPositions = new();


        public void SetTempPosition(int index, Vector3 position)
        {
            if (tempPositions.Count < limit)
            {
                for (int i = 1; i <= limit - tempPositions.Count; i++)
                {
                    tempPositions.Add(Vector3.zero);
                }
            }

            tempPositions[index] = position;
        }

        public Vector3 GetTempPosition(int index)
        {
            var position = tempPositions[index];
            tempPositions[index] = Vector3.zero;

            return position;
        }

        private void OnDisable()
        {
            Release();
        }

        public void Release()
        {
            tempPositions.Clear();
        }
    }
}
