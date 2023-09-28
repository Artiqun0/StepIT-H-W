using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace modul3
{
    class Shop
    {
        public string Name { get; set; }
        public string Address { get; set; }
        public string StoreProfile { get; set; }
        public string Email { get; set; }
        public string PhoneNumber { get; set; }

        public Shop() { }
        public Shop(string name, string address, string profile, string number, string email)
        {
            Name = name;
            StoreProfile = profile;
            PhoneNumber = number;
            Email = email;
            Address = address;
        }

        public override string ToString()
        {
            return $"Shop name - {Name}\n" +
                $"Store profile - {StoreProfile}\n" +
                $"Phone number - {PhoneNumber}\n" +
                $"Email - {Email}\n" +
                $"Address - {Address}";
        }

        public static class ShopManager
        {
            public static Shop CreateShop()
            {
                Console.Write("Enter shop name - ");
                string name = Console.ReadLine();

                Console.Write("Enter store profile - ");
                string profile = Console.ReadLine();

                Console.Write("Enter phone number - ");
                string number = Console.ReadLine();

                Console.Write("Enter e-mail - ");
                string email = Console.ReadLine();

                Console.Write("Enter address - ");
                string address = Console.ReadLine();

                return new Shop(name, address, profile, number, email);
            }
        }
    }
}