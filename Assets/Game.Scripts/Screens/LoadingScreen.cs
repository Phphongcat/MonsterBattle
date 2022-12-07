using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityScreenNavigator.Runtime.Core.Screens;
using UnityScreenNavigator.Runtime.Core.Shared.Views;
using Screen = UnityScreenNavigator.Runtime.Core.Screens.Screen;

namespace Game.Scripts.Screens
{
    public class LoadingScreen : Screen
    {
        [SerializeField] private Slider slider;
        [SerializeField] private TMP_Text text;
        [SerializeField] private string textFormat;
        [SerializeField] private int loadingTime = 2;

        private float _timer;
        
        
        public override void DidPushEnter()
        {
            _timer = default;
            InvokeRepeating(nameof(Loading), default, 0.02f);
        }

        public override void DidPopExit()
        {
        }

        private void Loading()
        {
            _timer += Time.deltaTime;
            if (_timer >= loadingTime)
            {
                _timer = loadingTime;
                
                if(IsInvoking(nameof(Loading)))
                {
                    CancelInvoke(nameof(Loading));
                }
                
                var options = new WindowOptions(EventNameKeeper.TeamSelectScreen, false, loadAsync: false);

                ScreenContainer.Of(transform).Pop(false);
                ScreenContainer.Of(transform).Push(options);
            }
            
            slider.value = _timer / loadingTime;
            text.SetText(string.Format(textFormat, $"{slider.value * 100:N0}"));
        }
    }
}
