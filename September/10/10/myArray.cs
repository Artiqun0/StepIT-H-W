using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _10
{
    internal class MyArray : ICalc, IOutput2, ICalc2
    {
        List<int> Array = new();

        public MyArray(List<int> array)
        {
            Array = array;
        }
        public MyArray() { }
        ~MyArray() { }

        public void add(int num) { this.Array.Add(num); }
        public void remove(int num) { this.Array.Remove(num); }

        public int Less(int valueToCompare)
        {
            int j = 0;
            for (int i = 0; i < this.Array.Count; i++)
            {
                if (Array[i] < valueToCompare)
                {
                    j++;
                }
            }
            return j;
        }
        public int Greater(int valueToCompare)
        {
            int j = 0;
            for (int i = 0; i < this.Array.Count; i++)
            {
                if (Array[i] > valueToCompare)
                {
                    j++;
                }
            }
            return j;
        }

        public void ShowEven()
        {
            int j = 0;
            for (int i = 0; i < this.Array.Count; i++)
            {
                if (Array[i] % 2 == 0 && Array[i] != 0)
                {
                    Console.Write(Array[i]);
                }
            }
            Console.WriteLine();
        }
        public void ShowOdd()
        {
            int j = 0;
            for (int i = 0; i < this.Array.Count; i++)
            {
                if (Array[i] % 2 != 0)
                {
                    Console.Write(Array[i]);
                }
            }
            Console.WriteLine();
        }
        public int CountDistinct()
        {
            int k = 0;
            for (int i = 0; i < this.Array.Count; i++)
            {
                int j = 0;
                for (int g = 0; g < this.Array.Count; g++)
                {
                    if (Array[i] == Array[g])
                    {
                        j++;
                    }
                }
                if (j == 1)
                {
                    k++;
                }
            }
            return k;
        }
        public int EqualToValue(int valueToCompare)
        {
            int k = 0;
            for (int i = 0; i < this.Array.Count; i++)
            {
                if (Array[i] == valueToCompare)
                {
                    k++;
                }

            }
            return k;
        }
    }
}
