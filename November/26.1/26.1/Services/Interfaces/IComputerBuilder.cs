using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._1.Services.Interfaces;
public interface IComputerBuilder
{
    void BuildProcessor();
    void BuildMemory();
    void BuildVideoCard();
    void BuildStorage();
    Computer GetComputer();
}
