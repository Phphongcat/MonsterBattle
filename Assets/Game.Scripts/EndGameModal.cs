using Game.Scripts;
using TigerForge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityScreenNavigator.Runtime.Core.Modals;
using UnityScreenNavigator.Runtime.Core.Screens;
using UnityScreenNavigator.Runtime.Core.Shared.Views;

public class EndGameModal : Modal
{
    [SerializeField] private TMP_Text text;
    [SerializeField] private string win = "WIN";
    [SerializeField] private string defeat = "DEFEAT";
    [SerializeField] private Button button;


    public override void DidPushEnter()
    {
        var data = EventManager.GetData(EventNameKeeper.EndBattle);
        text.SetText((bool) data ? win : defeat);
        button.onClick.AddListener(HomeScreen);
    }

    public override void DidPopEnter()
    {
        button.onClick.RemoveListener(HomeScreen);
    }
    
    private void HomeScreen()
    {
        EventManager.EmitEvent(EventNameKeeper.RemoveAllMonster);
        ScreenContainer.Find(EventNameKeeper.ScreenContainer).Pop(false);
        ModalContainer.Of(transform).Pop(true);
        
        var options = new WindowOptions(EventNameKeeper.TeamSelectScreen, false, loadAsync: false);
        ScreenContainer.Find(EventNameKeeper.ScreenContainer).Push(options);
    }
}
