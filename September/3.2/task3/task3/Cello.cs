using System;
using System.Collections.Generic;
using System.Diagnostics.Metrics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task3
{
    internal class Cello : Instrument
    {
        public string Size { get; set; }
        public string Color { get; set; }

        public Cello() { }
        public Cello(string make, string model, string size, string color) : base(make, model)
        {
            Size = size;
            Color = color;
        }
        ~Cello() { }

        public override void Sound()
        {
            Console.WriteLine("Cello sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Cello name");
        }
        public override void Desc()
        {
            Console.WriteLine("Cello desc");
        }
        public override void InstrumentHistory()
        {
            Console.WriteLine("Cello history");
        }
    }
}
