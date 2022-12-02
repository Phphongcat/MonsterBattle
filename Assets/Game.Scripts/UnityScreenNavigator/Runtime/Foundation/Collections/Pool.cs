using System.Collections.Generic;

namespace UnityScreenNavigator.Runtime.Foundation
{
    internal class Pool<T> where T : new()
    {
        public static readonly Pool<T> Shared = new();

        private readonly Queue<T> _queue = new();

        public T Rent()
            => _queue.Count == 0 ? new T() : _queue.Dequeue();

        public void Return(T instance)
            => _queue.Enqueue(instance);
    }
}
