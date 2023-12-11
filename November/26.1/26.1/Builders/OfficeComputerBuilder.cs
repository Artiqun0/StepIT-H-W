using _26._1.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._1.Builders;
public class OfficeComputerBuilder : ComputerBuilder, IComputerBuilder
{
    public override void BuildProcessor()
    {
        computer.Processor = SpareParts.Processor.OfficeProcessor;
    }

    public override void BuildMemory()
    {
        computer.Memory = SpareParts.Memory.OfficeMemory;
    }

    public override void BuildVideoCard()
    {
        computer.VideoCard = SpareParts.VideoCard.OfficeVideoCard;
    }

    public override void BuildStorage()
    {
        computer.Storage = SpareParts.Storage.OfficeStorage;
    }
}

