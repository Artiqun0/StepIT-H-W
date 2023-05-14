#include <iostream>
using namespace std;

uint16_t ccount{};

struct Student
{
	char* name = new char[21];
	char* surname = new char[21];
	char* patronymic = new char[21];
	int grades[10]{};

	void printInfo()
	{
		cout
			<< endl << "Student name: " << name << endl
			<< "Student surname: " << surname << endl
			<< "Student patronomic: " << patronymic << endl;

		for (size_t i = 0; i < 10; i++)
		{
			cout << "Grades " << i + 1 << ":" << grades[i] << endl;
		}
	}

	void average()
	{
		int a{};
		for (size_t i = 0; i < 10; i++)
		{
			a += grades[i];
		}
		cout << "Average rating this student: " << a / 10;
	}
};

struct Students
{
	char* name = new char[21];
	uint16_t capacity{ 20 };
	Student* students{};

	void createStudent()
	{
		if (ccount < capacity)
		{
			Student* s = new Student{};

			getchar();
			cout << "Enter student name: "; cin.getline(s->name, 20);
			cout << "Enter student surname: "; cin.getline(s->surname, 20);
			cout << "Enter student surname: "; cin.getline(s->patronymic, 20);

			students[ccount] = *s;
			ccount++;
		}
		else
			cout << "Class full";
	}

	void addGrades()
	{
		for (size_t i = 0; i < 10; i++)
		{
			cout << "Enter grades " << i + 1 << ":"; cin >> students->grades[i];
		}
	}

	void printStudents()
	{
		for (size_t i = 0; i < ccount; i++)
		{
			cout << i + 1 << students[i].name << endl;
		}
	}

	void printInfoStudents()
	{
		for (size_t i = 0; i < ccount; i++)
		{
			students[i].printInfo();
		}
	}
};

void createStudents(Students*& s)
{
	s = new Students{};

	cout << "Enter name: "; cin.getline(s->name, 20);

	s->students = new Student[s->capacity];
}

int main()
{
	Students* students{};
	createStudents(students);

	while (true)
	{
		int choice{};
		cout
			<< "1. Add student" << endl
			<< "2. Rate" << endl
			<< "3. Displaying a list of students" << endl
			<< "4. Printing student grades" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			students->createStudent();
			break;
		case 2:
			system("cls");
			students->printStudents();
			cin >> choice;
			students[choice].addGrades();
			break;
		case 3:
			system("cls");
			students->printStudents();
			break;
		case 4:
			system("cls");
			students->printStudents();
			cin >> choice;
			students[choice].printInfoStudents();
			break;
		}
	}
}