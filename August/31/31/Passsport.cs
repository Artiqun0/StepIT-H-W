using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace _31._08._2023
{
    class Passsport
    {
        private string id;
        private string name;
        private string surname;
        private string date;

        public string ID
        {
            get { return id; }
            set
            {
                if (Regex.IsMatch(value, @"^\d{9}$"))
                {
                    id = value;
                }
                else
                {
                    throw new ArgumentException("Invalid ID format. ID must consist of 9 digits.");
                }
            }
        }

        public string Name
        {
            get { return name; }
            set
            {
                if (Regex.IsMatch(value, @"^[A-Za-z]{2,10}$"))
                {
                    name = value;
                }
                else
                {
                    throw new ArgumentException("Invalid name. The name must contain only letters and be between 2 and 10 characters..");
                }
            }
        }

        public string Surname
        {
            get { return surname; }
            set
            {
                if (Regex.IsMatch(value, @"^[A-Za-z]{2,10}$"))
                {
                    surname = value;
                }
                else
                {
                    throw new ArgumentException("Incorrect last name. The surname must contain only letters and be between 2 and 10 characters. .");
                }
            }
        }

        public string Date
        {
            get { return date; }
            set
            {
                if (Regex.IsMatch(value, @"^\d{2}[/\.]\d{2}[/\.]\d{4}$"))
                {
                    date = value;
                }
                else
                {
                    throw new ArgumentException("Invalid date format. The date must be in DD.MM.YYYY or DD/MM/YYYY format.");
                }
            }
        }

        public Passsport(string iD, string name, string surname, string date)
        {
            ID = iD;
            Name = name;
            Surname = surname;
            Date = date;
        }

        public Passsport() { }

        ~Passsport() { }
    }
}
