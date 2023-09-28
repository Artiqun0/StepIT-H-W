using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task2
{
    public class Device
    {
        public string make { get; set; }
        public string model { get; set; }
        public Device() { }
        ~Device() { }

        public Device(string make, string model)
        {
            this.make = make;
            this.model = model;
        }
        public virtual void Sound()
        {
            Console.WriteLine("Device sound");
        }
        public virtual void Show()
        {
            Console.WriteLine("Show device name");
        }
        public virtual void Desc()
        {
            Console.WriteLine("Device desc");
        }
    }

}
