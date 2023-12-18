using _5.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace _5;
    public class Task : ITask
    {
    public string Title { get; set; }

    public void Display()
    {
        MessageBox.Show($"WPF Task Displayed. Title: {Title}");
    }

    public override string ToString()
    {
        return $"Task: {Title}";
    }
}

