using _26._1.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._1.Builders;
public class ComputerBuilder : IComputerBuilder
{
    protected Computer computer = new Computer();

    public virtual void BuildProcessor() { }
    public virtual void BuildMemory() { }
    public virtual void BuildVideoCard() { }
    public virtual void BuildStorage() { }

    public Computer GetComputer()
    {
        return computer;
    }
}

