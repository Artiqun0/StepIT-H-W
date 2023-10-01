using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12
{
    public class Node<T>
    {
        public T Data { get; set; }
        public Node<T> Next { get; set; }

        public Node<T> Previous { get; set; }


        public Node(T data)
        {
            Data = data;
            Next = null;
            Previous = null;
        }
    }

    public class MyLinkedList<T>
    {
        private Node<T> head;
        private Node<T> tail;
        private int count;

        public int Count
        {
            get { return count; }
        }

        public MyLinkedList()
        {
            head = null;
            tail = null;
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
                        tail = current;

                    current.Next = current.Next.Next;
                    count--;
                    return true;
                }
                current = current.Next;
            }
            return false;
        }


        public bool Contains(T data)
        {
            Node<T> current = head;
            while (current != null)
            {
                if (current.Data.Equals(data))
                    return true;
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

        public void Print()
        {
            Node<T> current = head;
            while (current != null)
            {
                Console.Write(current.Data + " ");
                current = current.Next;
            }
            Console.WriteLine();
        }
    }
}
