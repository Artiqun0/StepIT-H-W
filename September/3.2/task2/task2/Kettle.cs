using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task2
{
    class Kettle : Device
    {
        public string Size { get; set; }
        public string Color { get; set; }

        public Kettle() { }
        public Kettle(string make, string model, string size, string color) : base(make, model)
        {
            Size = size;
            Color = color;
        }
        ~Kettle() { }

        public override void Sound()
        {
            Console.WriteLine("Kittle sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show kittle name");
        }
        public override void Desc()
        {
            Console.WriteLine("Device desc");
        }
    }
}
