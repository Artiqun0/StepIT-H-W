using _23.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23.Services.Interfaces;

interface IDBEntryService
{
    public Movie toMovie(Docs movie);
}