using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace modul3
{
    class Magazine
    {
        public string Name { get; set; }
        public string YearOfFoundation { get; set; }
        public string PhoneNumber { get; set; }
        public string Email { get; set; }
        public Magazine() { }
        public Magazine(string name, string year, string number, string email)
        {
            Name = name;
            YearOfFoundation = year;
            PhoneNumber = number;
            Email = email;
        }
    }
}