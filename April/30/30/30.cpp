#include <iostream>
using namespace std;

struct Student
{
	char* name = new char[31] {};
	char* surname = new char[31] {};
	int age{};
	int faculty{};
	int average{};
	int course{};
};

struct Academy
{
	char* name = new char[31] {};
	int c[4]{};
	Student* IT = new Student[30]{};
	Student* Philosophical = new Student[30]{};
	Student* Journalism = new Student[30]{};
	Student* Law = new Student[30]{};

	void addStudent()
	{
		Student* s = new Student{};
		getchar();

		cout << "Enter name: "; cin.getline(s->name, 30);
		cout << "Enter surname: "; cin.getline(s->surname, 30);
		cout << "Enter age: "; cin >> s->age;
		cout << "Enter average: "; cin >> s->average;
		cout << "Enter course: "; cin >> s->course;

		cout
			<< "Enter faculty" << endl
			<< "1. IT" << endl
			<< "2. Philosophical" << endl
			<< "3. Journalism" << endl
			<< "4. Law" << endl;
		cin >> s->faculty;
		switch (s->faculty)
		{
		case 1:
			IT[c[0]] = *s;
			c[0]++;
			break;
		case 2:
			Philosophical[c[1]] = *s;
			c[1]++;
			break;
		case 3:
			Journalism[c[2]] = *s;
			c[2]++;
			break;
		case 4:
			Law[c[3]] = *s;
			c[3]++;
		default:
			break;
		}
	}

	int printStud()
	{
		int choice{};
		cout
			<< "Choice Faculty: " << endl
			<< "1. IT" << endl
			<< "2. Philosophical" << endl
			<< "3. Journalism" << endl
			<< "4. Law" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			for (size_t i = 0; i < c[0]; i++)
			{
				cout << i + 1 << ' ' << IT[i].name << endl;
			}
			break;
		case 2:
			for (size_t i = 0; i < c[1]; i++)
			{
				cout << i + 1 << ' ' << Philosophical[i].name << endl;
			}
			break;
		case 3:
			for (size_t i = 0; i < c[2]; i++)
			{
				cout << i + 1 << ' ' << Journalism[i].name << endl;
			}
			break;
		case 4:
			for (size_t i = 0; i < c[3]; i++)
			{
				cout << i + 1 << ' ' << Law[i].name << endl;
			}
			break;
		default:
			break;
		}

		return choice;
	}

	void deleteStudent(int facult)
	{
		int choice{};
		cout << "Choose student to delete:" << endl;
		cin >> choice;

		getchar();

		switch (facult)
		{
		case 1:
			for (int i = choice - 1; i < c[0] - 1; ++i)
			{
				IT[i].name = IT[i + 1].name;
				IT[i].surname = IT[i + 1].surname;
				IT[i].faculty = IT[i + 1].faculty;
				IT[i].age = IT[i + 1].age;
				IT[i].average = IT[i + 1].average;
				IT[i].course = IT[i + 1].course;
			}
			c[0]--;
			break;
		default:
			break;
		}

	}
};

void createAcademy(Academy*& a)
{
	cout << "Enter name: "; cin.getline(a->name, 30);
}

int main()
{
	Academy* UNEC = new Academy{};
	createAcademy(UNEC);

	while (true)
	{
		int choice{};

		cout
			<< "1. Add Student" << endl
			<< "2. Delete Student" << endl
			<< "3. Show Faculty student" << endl;
		cin >> choice;


		switch (choice)
		{
		case 1:
			system("cls");
			UNEC->addStudent();
			break;
		case 2:
			system("cls");
			UNEC->deleteStudent(UNEC->printStud());
			break;
		case 3:
			system("cls");
			UNEC->printStud();
			break;
		default:
			break;
		}
	}

	return 0;
}