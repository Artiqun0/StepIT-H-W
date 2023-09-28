using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task3
{
    internal class Ukulele : Instrument
    {
        public string Size { get; set; }
        public string Color { get; set; }

        public Ukulele() { }
        public Ukulele(string make, string model, string size, string color) : base(make, model)
        {
            Size = size;
            Color = color;
        }
        ~Ukulele() { }

        public override void Sound()
        {
            Console.WriteLine("Ukulele sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Ukulele name");
        }
        public override void Desc()
        {
            Console.WriteLine("Ukulele desc");
        }
        public override void InstrumentHistory()
        {
            Console.WriteLine("Ukulele history");
        }
    }
}
