using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3._1
{
    class Shop
    {
        public string Name { get; set; }
        public string Address { get; set; }
        public string StoreProfile { get; set; }
        public string Email { get; set; }
        public string PhoneNumber { get; set; }
        public int Area { get; set; }

        public Shop() { }
        public Shop(string name, string address, string profile, string number, string email, int area)
        {
            Name = name;
            StoreProfile = profile;
            PhoneNumber = number;
            Email = email;
            Address = address;
            Area = area;
        }
        public static Shop operator +(Shop left, Shop right)
        {
            left.Area += right.Area;
            return left;
        }

        public static Shop operator -(Shop left, Shop right)
        {
            left.Area -= right.Area;
            return left;
        }

        public static bool operator <(Shop left, Shop right)
        {
            return left.Area < right.Area;
        }
        public static bool operator >(Shop left, Shop right)
        {
            return left.Area > right.Area;
        }

        public static bool operator !=(Shop left, Shop right)
        {
            return !(left.Area == right.Area);
        }

        public static bool operator ==(Shop left, Shop right)
        {
            return left.Area == right.Area;
        }
        public override string ToString()
        {
            return $"Shop name - {Name}\n" +
                $"Store profile - {StoreProfile}\n" +
                $"Phone number - {PhoneNumber}\n" +
                $"Email - {Email}\n" +
                $"Address - {Address}" +
                $"Area - {Area}";
        }
    }
}
