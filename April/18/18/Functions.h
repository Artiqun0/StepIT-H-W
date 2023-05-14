#include <iostream>
using namespace std;

struct book
{
	char* name;
	char* author;
	char* publishing;

	void print()
	{
		cout
			<< name << endl
			<< author << endl
			<< publishing << endl;
	}

	void edit()
	{
		int select{};
		cout
			<< "Enter select change" << endl
			<< "1: Name" << endl
			<< "2: Author" << endl
			<< "3: Publishing" << endl
			<< "4: All" << endl;
		cin >> select;
		getchar();

		switch (select)
		{
		case 1:
			cout << "Enter name: ";
			cin.getline(name, 10);
			break;
		case 2:
			cout << "Enter author: ";
			cin.getline(author, 10);
		case 3:
			cout << "Enter publishing: ";
			cin.getline(publishing, 10);
		case 4:
			cout << "Enter name: ";
			cin.getline(name, 10);

			cout << "Enter author: ";
			cin.getline(author, 10);

			cout << "Enter publishing: ";
			cin.getline(publishing, 10);
		default:
			break;
		}
	}
};

void printBook(book** books);
book* createBook(int count);
void searchBookName(book** books);
void searchBookAuthor(book** books);
void sortName(book** books);
void sortAuthor(book** books);
void sortPublishing(book** books);
