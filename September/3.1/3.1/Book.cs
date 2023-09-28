using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3._1
{
    class Book
    {
        public string BookName { get; set; }
        public string Author { get; set; }

        public Book() { }

        public Book(string BookName, string Author)
        {
            this.BookName = BookName;
            this.Author = Author;
        }

        public static bool operator ==(Book left, Book right)
        {
            return left.BookName == right.BookName;
        }
        public static bool operator !=(Book left, Book right)
        {
            return !(left.BookName == right.BookName);
        }

        public override string ToString()
        {
            return $"Book name - {BookName}\n" + $"Book author - {Author}";
        }
    }

}