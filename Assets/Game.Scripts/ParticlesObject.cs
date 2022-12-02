using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;

namespace Game.Scripts
{
    public class ParticlesObject : MonoBehaviour
    {
        [SerializeField] private float speed = 0.5f;
        [SerializeField] private int delayTime = 1700;

        public int GetDelayTimer() => delayTime;
        public float GetSpeed() => speed;
        
        public async void Active(Transform start, Transform end)
        {
            transform.position = start.position;
            transform.DOMove(end.position, speed).SetEase(Ease.Linear);

            await UniTask.Delay(delayTime);
            
            Destroy(gameObject);
        }
    }
}
