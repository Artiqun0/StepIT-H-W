﻿using _26._2.Classes;
using _26._2.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._2.Factories;
public class SUVFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new SUV();
    }
}
