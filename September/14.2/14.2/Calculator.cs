using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14._2
{
    internal class Calculator
    {
        public delegate double MathOperation(double a, double b);

        public double Add(double a, double b)
        {
            return a + b;
        }
        public double Subtract(double a, double b)
        {
            return a - b;
        }
        public double Multiply(double a, double b)
        {
            return a * b;
        }
        public double Divide(double a, double b)
        {
            if (b == 0)
            {
                throw new ArgumentException("Error: Division by zero");
            }
            return a / b;
        }
    }
}
