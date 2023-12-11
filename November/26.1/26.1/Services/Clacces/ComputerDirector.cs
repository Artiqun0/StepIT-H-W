using _26._1.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._1.Services;
    public class ComputerDirector
    {
    public void ConstructComputer(IComputerBuilder builder)
    {
        builder.BuildProcessor();
        builder.BuildMemory();
        builder.BuildVideoCard();
        builder.BuildStorage();
    }
}

