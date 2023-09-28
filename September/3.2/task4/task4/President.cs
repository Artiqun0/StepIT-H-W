using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task4
{
    internal class President : Worker
    {
        public string salary { get; set; }
        public override void print()
        {
            Console.WriteLine(salary);
        }
    }
}
