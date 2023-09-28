using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Modul3
{
    class Square
    {
        public string Symbol { get; set; }
        public int Length { get; set; }

        public string CreateSquare()
        {
            StringBuilder result = new StringBuilder();
            for (int i = 0; i < Length; i++)
            {
                for (int j = 0; j < Length; j++)
                {
                    if (i == 0 || i == Length - 1)
                    {
                        result.Append($"{Symbol} ");
                        if (j == Length - 1)
                        {
                            result.Append("\n");
                        }
                    }
                    else if (i != 0 && j == 0)
                    {
                        result.Append($"{Symbol} ");
                    }
                    else if (i != 0 && j == Length - 1)
                    {
                        result.Append($"{Symbol} ");
                        result.Append("\n");
                    }
                    else
                    {
                        result.Append("  ");
                    }
                }
            }
            return result.ToString();
        }
    }
}