using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12
{
    public class MyPriorityQueue<T>
    {
        public enum Priority
        {
            Low,
            Medium,
            High
        }

        public class PrioritiItem<T>
        {
            public T Item { get; }
            public Priority priority { get; }

            public PrioritiItem(T item, Priority priority)
            {
                Item = item;
                this.priority = priority;
            }
        }

        private LinkedList<PrioritiItem<T>> PrList = new LinkedList<PrioritiItem<T>>();
        public MyPriorityQueue() { }
        ~MyPriorityQueue() { }

        public void Enqueue(T item, Priority priority)
        {
            PrioritiItem<T> newItem = new PrioritiItem<T>(item, priority);

            if (PrList.Count == 0)
            {
                PrList.AddLast(newItem);
            }
            else
            {
                var node = PrList.First;

                while (node != null)
                {
                    if (newItem.priority > node.Value.priority)
                    {
                        PrList.AddBefore(node, newItem);
                        return;
                    }

                    node = node.Next;
                }

                PrList.AddLast(newItem);
            }
        }
        public T Dequeue()
        {
            if (IsEmpty())
            {
                throw new InvalidOperationException("The priority queue is empty");
            }

            T item = PrList.First.Value.Item;
            PrList.RemoveFirst();
            return item;
        }
        public bool IsEmpty()
        {
            return PrList.Count == 0;
        }
        public int Count()
        {
            return PrList.Count;
        }
    }
}
