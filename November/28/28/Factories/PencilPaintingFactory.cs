using _28.Classes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _28.Factories;
public class PencilPaintingFactory : PaintingFactory
{
    public void createNaturePainting()
    {
        PencilNaturePainting pencilNaturePainting = new PencilNaturePainting();
    }

    public void createPortraitPainting()
    {
        PencilPortraitPainting pencilPortraitPainting = new PencilPortraitPainting();
    }
}

