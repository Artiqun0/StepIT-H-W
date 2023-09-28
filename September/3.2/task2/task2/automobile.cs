using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task2
{
    internal class Automobile : Device
    {
        public string Horsepower { get; set; }
        public string Color { get; set; }

        public Automobile() { }
        public Automobile(string make, string model, string horsepower, string color) : base(make, model)
        {
            Horsepower = horsepower;
            Color = color;
        }
        ~Automobile() { }

        public override void Sound()
        {
            Console.WriteLine("Automobile sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Automobile name");
        }
        public override void Desc()
        {
            Console.WriteLine("Automobile desc");
        }
    }
}
