using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task2
{
    internal class Steamship : Device
    {
        public string Horsepower { get; set; }
        public string Color { get; set; }

        public Steamship() { }
        public Steamship(string make, string model, string horsepower, string color) : base(make, model)
        {
            Horsepower = horsepower;
            Color = color;
        }
        ~Steamship() { }

        public override void Sound()
        {
            Console.WriteLine("Steamship sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Steamship name");
        }
        public override void Desc()
        {
            Console.WriteLine("Steamship desc");
        }
    }
}
