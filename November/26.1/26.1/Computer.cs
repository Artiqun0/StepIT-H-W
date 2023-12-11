using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._1;
     public class Computer
    {
    public string Processor { get; set; }
    public string Memory { get; set; }
    public string Motherboard { get; set; }
    public string Storage { get; set; }
    public string VideoCard {  get; set; }

    public void PrintInfo()
    {
        System.Console.WriteLine($"Computer configurations:\nProcessor: {Processor}\nMemory: {Memory}\nVideo card: {VideoCard}\nStorage: {Storage}\n");
    }
}

