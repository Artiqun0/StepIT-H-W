#include "Functions.h"

void printBook(book** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		cout << "Book number " << i + 1 << ":" << endl;
		books[i]->print();
	}
}

book* createBook(int count)
{
	book* b = new book;

	b->name = new char[11];
	b->author = new char[11];
	b->publishing = new char[11];

	cout << "Enter name: ";
	cin.getline(b->name, 10);

	cout << "Enter author: ";
	cin.getline(b->author, 10);

	cout << "Enter publishing: ";
	cin.getline(b->publishing, 10);

	return b;
}

void searchBookName(book** books)
{
	char search[11]{};
	int len{};

	cout << "Enter name book: "; cin.getline(search, 10);

	while (search[len] != '\0')
		len++;

	for (size_t i = 0; books[i] != nullptr; i++)
	{
		int yes{};
		for (size_t j = 0; j < len; j++)
		{
			if (books[i]->name[j] == search[j])
				yes++;
		}
		if (yes == len)
			cout << "Book numbered: " << i + 1 << endl;
	}
}

void searchBookAuthor(book** books)
{
	char search[11]{};
	int len{};

	cout << "Enter author book: "; cin.getline(search, 10);

	while (search[len] != '\0')
		len++;

	for (size_t i = 0; books[i] != nullptr; i++)
	{
		int yes{};
		for (size_t j = 0; j < len; j++)
		{
			if (books[i]->author[j] == search[j])
				yes++;
		}
		if (yes == len)
			cout << "Book numbered: " << i + 1;
	}
}

void sortName(book** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		for (size_t j = 0; books[j] != nullptr; j++)
		{
			if ((int)books[i]->name[0] < (int)books[j]->name[0])
			{
				char* r = books[i]->name;
				books[i]->name = books[j]->name;
				books[j]->name = r;
				r = books[i]->author;
				books[i]->author = books[j]->author;
				books[j]->author = r;
				r = books[i]->publishing;
				books[i]->publishing = books[j]->publishing;
				books[j]->publishing = r;
			}
		}
	}
	printBook(books);
}

void sortAuthor(book** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		for (size_t j = 0; books[j] != nullptr; j++)
		{
			if ((int)books[i]->author[0] < (int)books[j]->author[0])
			{
				char* r = books[i]->name;
				books[i]->name = books[j]->name;
				books[j]->name = r;
				r = books[i]->author;
				books[i]->author = books[j]->author;
				books[j]->author = r;
				r = books[i]->publishing;
				books[i]->publishing = books[j]->publishing;
				books[j]->publishing = r;
			}
		}
	}
	printBook(books);
}

void sortPublishing(book** books)
{
	for (size_t i = 0; books[i] != nullptr; i++)
	{
		for (size_t j = 0; books[j] != nullptr; j++)
		{
			if ((int)books[i]->publishing[0] < (int)books[j]->publishing[0])
			{
				char* r = books[i]->name;
				books[i]->name = books[j]->name;
				books[j]->name = r;
				r = books[i]->author;
				books[i]->author = books[j]->author;
				books[j]->author = r;
				r = books[i]->publishing;
				books[i]->publishing = books[j]->publishing;
				books[j]->publishing = r;
			}
		}
	}
	printBook(books);
}
