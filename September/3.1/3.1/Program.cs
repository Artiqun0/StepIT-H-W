using _3._1;
#region Task3
/*
bool key = true;
List<Book> books = new List<Book>();

while (key)
{
    Console.Write("1. Add book\n" +
                      "2. Delete book\n" +
                      "3. Search book\n" +
                      "4. Show all books" +
                      "5. Exit\n" +
                      "Enter choice - ");
    int choice = int.Parse(Console.ReadLine());

    switch (choice)
    {
        case 1:
            Console.Write("Enter book name - ");
            string name = Console.ReadLine();
            Console.Write("Enter book author - ");
            string author = Console.ReadLine();
            books.Add(new Book(name, author));
            break;
        case 2:
            Console.Write("Enter book name - ");
            string name_d = Console.ReadLine();

            for (int i = 0; i < books.Count; i++)
            {
                if (books[i].BookName == name_d)
                {
                    books.Remove(books[i]);
                }
            }

            break;
        case 3:
            Console.Write("Enter book name - ");
            string name_s = Console.ReadLine();
            for (int i = 0; i < books.Count; i++)
            {
                if (name_s == books[i].BookName)
                {
                    Console.WriteLine(books[i]);
                }
            }
            break;
        case 4:
            for (int i = 0; i < books.Count; i++)
            {
                Console.WriteLine(books[i]);
            }
            break;
        case 5:
            key = false;
            break;
        default:
            break;
    }
}*/

#endregion