using _28.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _28.Classes;
public class OilNaturePainting : INaturePainting
{
    public void Paint(IPortraitPainting painting)
    {
        Console.WriteLine("Oil nature painting\n");
    }
}
