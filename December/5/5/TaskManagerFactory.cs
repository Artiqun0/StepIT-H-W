using _5.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5;
    public class TaskManagerFactory : ITaskManagerFactory
{
    public ITask CreateTask()
    {
        return new Task();
    }

    public IDeadlineTask CreateDeadlineTask()
    {
        return new DedlineTask();
    }
}

