using TigerForge;
using Screen = UnityScreenNavigator.Runtime.Core.Screens.Screen;

namespace Game.Scripts.Screens
{
    public class TeamSelectScreen : Screen
    {
        public override void DidPushEnter()
        {
            EventManager.EmitEvent(EventNameKeeper.InstantiateAsyncMonsters);
        }
    }
}
