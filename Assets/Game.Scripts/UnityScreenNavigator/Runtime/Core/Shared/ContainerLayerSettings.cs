﻿using UnityEngine;

namespace UnityScreenNavigator.Runtime.Core.Shared
{
    [CreateAssetMenu(fileName = "ContainerLayerSettings", menuName = "Screen Navigator/Settings/Container Layer Settings", order = 0)]
    public class ContainerLayerSettings : ScriptableObject
    {
        [SerializeField] private ContainerLayerConfig[] containerLayers;
        
        public ContainerLayerConfig[] GetContainerLayers()
        {
            return containerLayers;
        }
    }
}