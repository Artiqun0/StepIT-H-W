using _26._1.Builders;
using _26._1.Services.Interfaces;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._1.Builder;
public class GamingComputerBuilder : ComputerBuilder, IComputerBuilder
{
    public override void BuildProcessor()
    {
        computer.Processor = SpareParts.Processor.GamingProcessor;
    }

    public override void BuildMemory()
    {
        computer.Memory = SpareParts.Memory.GamingMemory;
    }

    public override void BuildVideoCard()
    {
        computer.VideoCard = SpareParts.VideoCard.GamingVideoCard;
    }

    public override void BuildStorage()
    {
        computer.Storage = SpareParts.Storage.GamingStorage;
    }
}

