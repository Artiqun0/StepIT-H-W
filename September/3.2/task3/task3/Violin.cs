using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task3
{
    internal class Violin : Instrument
    {
        public string Size { get; set; }
        public string Color { get; set; }

        public Violin() { }
        public Violin(string make, string model, string size, string color) : base(make, model)
        {
            Size = size;
            Color = color;
        }
        ~Violin() { }

        public override void Sound()
        {
            Console.WriteLine("Violin sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Violin name");
        }
        public override void Desc()
        {
            Console.WriteLine("Violin desc");
        }
        public override void InstrumentHistory()
        {
            Console.WriteLine("Violin history");
        }
    }
}
