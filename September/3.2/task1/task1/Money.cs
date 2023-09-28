using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task1
{
    public class Money
    {
        public int Dollars
        {
            get => Dollars;
            set { if (value > 0) { Dollars = value; } else { throw new ArgumentException("Число не может быть меньше нуля."); } }
        }
        public int Cents
        {
            get => Cents;
            set { if (value > 0 && value < 100) { Cents = value; } else { throw new ArgumentException("Число не может быть меньше нуля и больше 99."); } }
        }

        public Money(int dollars, int cents)
        {
            Dollars = dollars;
            Cents = cents;
        }
        ~Money() { }

        public void Print()
        {
            Console.WriteLine("Money: " + Dollars + '.' + Cents);
        }

        public void SetAmount(int dollars, int cents)
        {
            Dollars = dollars;
            Cents = cents;
        }
    }

}
