using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12
{
    public class MyCircularQueue<T>
    {
        private T[] array;
        private int capacity;
        private int front;
        private int rear;
        private int count;

        public MyCircularQueue(int size)
        {
            capacity = size;
            array = new T[size];
            front = 0;
            rear = -1;
            count = 0;
        }

        public bool IsEmpty()
        {
            return count == 0;
        }

        public bool IsFull()
        {
            return count == capacity;
        }

        public int Count()
        {
            return count;
        }

        public void Enqueue(T item)
        {
            if (IsFull())
            {
                throw new InvalidOperationException("The ring queue is full");
            }

            rear = (rear + 1) % capacity;
            array[rear] = item;
            count++;
        }

        public T Dequeue()
        {
            if (IsEmpty())
            {
                throw new InvalidOperationException("The ring queue is empty");
            }

            T item = array[front];
            front = (front + 1) % capacity;
            count--;
            return item;
        }

        public T Peek()
        {
            if (IsEmpty())
            {
                throw new InvalidOperationException("The ring queue is empty");
            }
            return array[front];
        }
    }
}
