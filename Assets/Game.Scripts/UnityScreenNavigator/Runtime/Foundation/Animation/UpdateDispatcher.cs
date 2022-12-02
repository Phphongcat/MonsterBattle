using System;
using System.Collections.Generic;
using UnityEngine;

namespace UnityScreenNavigator.Runtime.Foundation.Animation
{
    internal delegate float CalcDeltaTime(float deltaTime);

    public enum DeltaTimeType
    {
        Unscaled,
        Timescaled,
    }

    internal class UpdateDispatcher : MonoBehaviour
    {
        private static UpdateDispatcher _instance;
        
        public static UpdateDispatcher Instance
        {
            get
            {
                if (_instance == null)
                {
                    var gameObject = new GameObject($"{nameof(UnityScreenNavigator)}.{nameof(UpdateDispatcher)}");
                    var component = gameObject.AddComponent<UpdateDispatcher>();
                    DontDestroyOnLoad(gameObject);
                    _instance = component;
                }

                return _instance;
            }
        }

        private readonly Dictionary<IUpdatable, CalcDeltaTime> _targets = new();
        private Action _updater;

        private void Awake()
        {
            SetDeltaTime(DeltaTimeType.Unscaled);
        }

        private void Update()
        {
            _updater();
        }

        private void UnscaledUpdate()
        {
            foreach (var target in _targets)
            {
                var deltaTime = target.Value?.Invoke(Time.unscaledDeltaTime) ?? Time.unscaledDeltaTime;
                target.Key.Update(deltaTime);
            }
        }

        private void ScaledUpdate()
        {
            foreach (var target in _targets)
            {
                var deltaTime = target.Value?.Invoke(Time.deltaTime) ?? Time.deltaTime;
                target.Key.Update(deltaTime);
            }
        }

        public void SetDeltaTime(DeltaTimeType type)
        {
            if (type == DeltaTimeType.Timescaled)
                _updater = ScaledUpdate;
            else
                _updater = UnscaledUpdate;
        }

        public void Register(IUpdatable target, CalcDeltaTime calcDeltaTime = null)
        {
            _targets.Add(target, calcDeltaTime);
        }

        public void Unregister(IUpdatable target)
        {
            _targets.Remove(target);
        }
    }
}