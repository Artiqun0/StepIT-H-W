using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3._1
{
    class Magazine
    {
        public string Name { get; set; }
        public string YearOfFoundation { get; set; }
        public string PhoneNumber { get; set; }
        public string Email { get; set; }

        public int EmployeesCount { get; set; }
        public Magazine() { }
        public Magazine(string name, string year, string number, string email, int employeesCount)
        {
            Name = name;
            YearOfFoundation = year;
            PhoneNumber = number;
            Email = email;
            EmployeesCount = employeesCount;
        }

        public static Magazine operator +(Magazine left, Magazine right)
        {
            left.EmployeesCount += right.EmployeesCount;
            return left;
        }

        public static Magazine operator -(Magazine left, Magazine right)
        {
            left.EmployeesCount -= right.EmployeesCount;
            return left;
        }

        public static bool operator <(Magazine left, Magazine right)
        {
            return left.EmployeesCount < right.EmployeesCount;
        }
        public static bool operator >(Magazine left, Magazine right)
        {
            return left.EmployeesCount > right.EmployeesCount;
        }

        public static bool operator !=(Magazine left, Magazine right)
        {
            return !(left.EmployeesCount == right.EmployeesCount);
        }

        public static bool operator ==(Magazine left, Magazine right)
        {
            return left.EmployeesCount == right.EmployeesCount;
        }
    }
}
