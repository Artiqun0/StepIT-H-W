using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12
{
    public class MyDoubleLinkedList<T>
    {
        private Node<T> head;
        private Node<T> tail;
        private Node<T> previous;

        private int count;

        public int Count
        {
            get { return count; }
        }

        public MyDoubleLinkedList()
        {
            head = null;
            tail = null;
            previous = null;
            count = 0;
        }

        public void Add(T data)
        {
            Node<T> newNode = new Node<T>(data);
            if (head == null)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail.Next = newNode;
                newNode.Previous = tail;
                tail = newNode;
            }
            count++;
        }

        public bool Remove(T data)
        {
            if (head == null)
                return false;

            if (head.Data.Equals(data))
            {
                head = head.Next;
                if (head == null)
                    tail = null;
                count--;
                return true;
            }

            Node<T> current = head;
            while (current.Next != null)
            {
                if (current.Next.Data.Equals(data))
                {
                    if (current.Next == tail)
                    {
                        tail.Previous = current.Previous;
                        tail = current;
                        return true;
                    }
                    current.Next.Next.Previous = current;
                    current.Next = current.Next.Next;
                    count--;
                    return true;
                }
                current = current.Next;
            }
            return false;
        }

        public void Clear()
        {
            head = null;
            tail = null;
            count = 0;
        }

    }
}
