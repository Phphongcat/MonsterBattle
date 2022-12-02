using UnityEngine;
using UnityEngine.EventSystems;
using UnityScreenNavigator.Runtime.Foundation;

namespace UnityScreenNavigator.Runtime.Core.Shared.Views
{
    [RequireComponent(typeof(RectTransform), typeof(CanvasGroup))]
    public abstract class View : UIBehaviour, IView
    {
        [SerializeField] private bool _usePrefabNameAsIdentifier = true;

        [SerializeField]
        [EnabledIf(nameof(_usePrefabNameAsIdentifier), false)]
        private string _identifier;

        public string Identifier
        {
            get => _identifier;
            set => _identifier = value;
        }

        public virtual string Name
        {
            get
            {
                return !IsDestroyed() && gameObject == true ? gameObject.name : string.Empty;
            }

            set
            {
                if (IsDestroyed() || gameObject == false)
                    return;

                gameObject.name = value;
            }
        }

        [SerializeField, HideInInspector]
        private RectTransform _rectTransform;

        public virtual RectTransform RectTransform
        {
            get
            {
                if (IsDestroyed())
                    return null;

                if (_rectTransform == false)
                    _rectTransform = gameObject.GetOrAddComponent<RectTransform>();

                return _rectTransform;
            }
        }

        private Transform _parent;

        public virtual Transform Parent
        {
            get
            {
                if (IsDestroyed())
                {
                    return null;
                }

                return _parent;
            }

            internal set => _parent = value;
        }
    
        public virtual GameObject Owner
        {
            get { return IsDestroyed() ? null : gameObject; }
        }

        public virtual bool ActiveSelf
        {
            get
            {
                GameObject o;
                return IsDestroyed() == false
                    && (o = gameObject) == true
                    && o.activeSelf == true;
            }

            set
            {
                if (IsDestroyed() 
                    || gameObject == false
                    || gameObject.activeSelf == value)
                    return;

                gameObject.SetActive(value);
            }
        }

        public virtual float Alpha
        {
            get
            {
                if (IsDestroyed() || gameObject == false)
                    return 0;

                return CanvasGroup.alpha;
            }
            set
            {
                if (IsDestroyed() || gameObject == false)
                    return;

                CanvasGroup.alpha = value;
            }
        }

        public virtual bool Interactable
        {
            get
            {
                if (IsDestroyed() || gameObject == false)
                    return false;

                if (UnityScreenNavigatorSettings.Instance.UseBlocksRaycastsInsteadOfInteractable)
                {
                    return CanvasGroup.blocksRaycasts;
                }

                return CanvasGroup.interactable;
            }

            set
            {
                if (IsDestroyed() || gameObject == false)
                    return;

                if (UnityScreenNavigatorSettings.Instance.UseBlocksRaycastsInsteadOfInteractable)
                {
                    CanvasGroup.blocksRaycasts = value;
                }
                else
                {
                    CanvasGroup.interactable = value;
                }
            }
        }

        [SerializeField, HideInInspector]
        private CanvasGroup _canvasGroup;

        public virtual CanvasGroup CanvasGroup
        {
            get
            {
                if (IsDestroyed())
                    return null;

                if (_canvasGroup == false)
                    _canvasGroup = gameObject.GetOrAddComponent<CanvasGroup>();

                return _canvasGroup;
            }
        }

        protected void SetIdentifer()
        {
            _identifier = _usePrefabNameAsIdentifier
                ? gameObject.name.Replace("(Clone)", string.Empty)
                : _identifier;
        }
    }
}