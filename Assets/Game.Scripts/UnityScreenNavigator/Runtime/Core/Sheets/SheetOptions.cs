namespace UnityScreenNavigator.Runtime.Core.Sheets
{
    public readonly struct SheetOptions
    {
        public readonly bool loadAsync;
        public readonly string resourcePath;
        public readonly SheetLoadedAction onLoaded;

        public SheetOptions(
              string resourcePath
            , SheetLoadedAction onLoaded = null
            , bool loadAsync = true
        )
        {
            this.loadAsync = loadAsync;
            this.resourcePath = resourcePath;
            this.onLoaded = onLoaded;
        }

        public static implicit operator SheetOptions(string resourcePath)
            => new(resourcePath);
    }
}