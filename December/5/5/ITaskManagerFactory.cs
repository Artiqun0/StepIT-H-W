using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5.Interfaces;
    public interface ITaskManagerFactory
    {
    ITask CreateTask();
    IDeadlineTask CreateDeadlineTask();
}

