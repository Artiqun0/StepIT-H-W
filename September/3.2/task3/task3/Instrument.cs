using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task3
{
    internal class Instrument
    {

        public string make { get; set; }
        public string model { get; set; }
        public Instrument() { }
        ~Instrument() { }

        public Instrument(string make, string model)
        {
            this.make = make;
            this.model = model;
        }
        public virtual void Sound()
        {
            Console.WriteLine("Instrument sound");
        }
        public virtual void Show()
        {
            Console.WriteLine("Show Instrument name");
        }
        public virtual void Desc()
        {
            Console.WriteLine("Instrument desc");
        }
        public virtual void InstrumentHistory()
        {
            Console.WriteLine("Instrument history");
        }

    }
}
