﻿using _26._2.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26._2.Factories;
public interface IAutomobileFactory
{
    IAutomobile CreateAutomobile();
}