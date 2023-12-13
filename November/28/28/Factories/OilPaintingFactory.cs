using _28.Classes;
using _28.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _28.Factories;
public class OilPaintingFactory : PaintingFactory
{
    public void createNaturePainting()
    {
        OilNaturePainting oilNaturePainting = new OilNaturePainting();
    }

    public void createPortraitPainting()
    {
        OilPortraitPainting oilPortraitPainting = new OilPortraitPainting();
    }
}
