using _28.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _28.Classes;
public class OilPortraitPainting : IPortraitPainting
{
    public void Paint(IPortraitPainting painting)
    {
        Console.WriteLine("Oil portrait painting\n");
    }
}

