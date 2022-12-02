#if USN_USE_ADDRESSABLES
using UnityEngine;

namespace UnityScreenNavigator.Runtime.Foundation.AssetLoaders
{
    [CreateAssetMenu(fileName = "AddressableAssetLoader", menuName = "Screen Navigator/Loaders/Addressables Asset Loader")]
    public sealed class AddressableAssetLoaderObject : AssetLoaderObject, IAssetLoader
    {
        private readonly AddressableAssetLoader _loader = new();

        public override AssetLoadHandle<T> Load<T>(string key)
        {
            return _loader.Load<T>(key);
        }

        public override AssetLoadHandle<T> LoadAsync<T>(string key)
        {
            return _loader.LoadAsync<T>(key);
        }

        public override void Release(AssetLoadHandle handle)
        {
            _loader.Release(handle);
        }
    }
}
#endif