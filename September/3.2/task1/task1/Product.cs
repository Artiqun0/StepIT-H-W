using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task1
{
    public class Product
    {
        public string Name { get; set; }
        public Money Price { get; set; }

        public Product(string name, Money price)
        {
            Name = name;
            Price = price;
        }
        ~Product() { }

        public void ReducePrice(int dollars, int cents)
        {
            int tempDollar = Price.Dollars;
            int tempCents = Price.Cents;

            tempDollar -= dollars;
            tempCents -= cents;

            Price.SetAmount(tempDollar, tempCents);
        }

        public void AddToPrice(int dollars, int cents)
        {
            int tempDollar = Price.Dollars;
            int tempCents = Price.Cents;

            tempDollar += dollars;
            tempCents += cents;

            Price.SetAmount(tempDollar, tempCents);
        }
    }
}
