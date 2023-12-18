using _5.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace _5;
    public class DedlineTask : IDeadlineTask  
    {
    public string Title { get; set; }
    public DateTime Deadline { get; set; }

    public void Display()
    {
        MessageBox.Show($"WPF Deadline Task Displayed. Title: {Title}, Deadline: {Deadline}");
    }

    public override string ToString()
    {
        return $"Deadline Task: {Title}, Deadline: {Deadline}";
    }
}

