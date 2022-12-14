using System;
using Cysharp.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;
using UnityScreenNavigator.Runtime.Core.Activities;
using UnityScreenNavigator.Runtime.Core.Modals;
using UnityScreenNavigator.Runtime.Core.Screens;
using UnityScreenNavigator.Runtime.Core.Shared;
using UnityScreenNavigator.Runtime.Core.Shared.Views;

namespace Game.Scripts
{
    public class ContainerLauncher : MonoBehaviour
    {
        [SerializeField] private ContainerLayerSettings containerLayerSettings;
        [SerializeField] private int modalOrderSorting;

        private GlobalContainerLayerManager _globalContainerLayerManager;

        
        private void Awake()
        {
            if (containerLayerSettings == null)
                throw new ArgumentNullException(nameof(containerLayerSettings));

            _globalContainerLayerManager = this.GetOrAddComponent<GlobalContainerLayerManager>();
        }

        private async void Start()
        {
            var layers = containerLayerSettings.GetContainerLayers();
            var manager = _globalContainerLayerManager;

            foreach (var layer in layers)
            {
                switch (layer.layerType)
                {
                    case ContainerLayerType.Modal:
                        await ModalContainer.CreateAsync(layer, manager).ContinueWith(modal =>
                        {
                            var canvas = modal.GetComponent<Canvas>();
                            canvas.overrideSorting = true;
                            canvas.sortingOrder = modalOrderSorting;
                        });
                        break;

                    case ContainerLayerType.Screen:
                        await ScreenContainer.CreateAsync(layer, manager);
                        break;

                    case ContainerLayerType.Activity:
                        await ActivityContainer.CreateAsync(layer, manager);
                        break;
                    
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }

            var options = new WindowOptions(EventNameKeeper.LoadingScreen, false, loadAsync: false);
            await manager.Find<ScreenContainer>(EventNameKeeper.ScreenContainer).Push(options);
        }
    }
}
