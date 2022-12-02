using System;
using UnityEngine;

namespace UnityScreenNavigator.Runtime.Foundation
{
    [AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
    public class ShowIfAttribute : PropertyAttribute
    {
        public readonly string ConditionField;

        public string ConditionField2 { get; set; } = string.Empty;

        public bool HideInInspector { get; set; } = true;

        public bool Inverse { get; set; }

        public ShowIfAttribute(string conditionField)
        {
            this.ConditionField = conditionField;
        }
    }
}
