using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task3
{
    internal class Trombone : Instrument
    {
        public string Size { get; set; }
        public string Color { get; set; }

        public Trombone() { }
        public Trombone(string make, string model, string size, string color) : base(make, model)
        {
            Size = size;
            Color = color;
        }
        ~Trombone() { }

        public override void Sound()
        {
            Console.WriteLine("Trombone sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Trombone name");
        }
        public override void Desc()
        {
            Console.WriteLine("Trombone desc");
        }
        public override void InstrumentHistory()
        {
            Console.WriteLine("Trombone history");
        }
    }
}
