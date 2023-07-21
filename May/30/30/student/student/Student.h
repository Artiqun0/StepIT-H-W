#pragma once
#include <iostream>
#include <string>
#include "Birthday.h"
using namespace std;

class Student
{
private:
	string name{};
	string surname{};
	string patronomic{};
public:
	birthday* birthDay{};
	string placeOfRsidence{};
	int* contactNumber = new int{};
	uint16_t* grades = new uint16_t[5]{};

	Student() = default;

	Student(string& _name, string& _surname, string& _patronomic, uint16_t& _day, uint16_t& _month,
		uint16_t& _year, string& _placeOfResidence, int& _contactNumber, uint16_t& grade1, uint16_t& grade2,
		uint16_t& grade3, uint16_t& grade4, uint16_t& grade5);

	string getName() const;
	string getSurname() const;
	string getPatronomic() const;

	void setName(string& _Name);
	void setSurname(string& _Surname);
	void setPatronomic(string& _Patronomic);

	friend ostream& operator<<(ostream& os, const Student& _Student)
	{
		os
			<< "Student name: " << _Student.name << endl
			<< "Student surname: " << _Student.surname << endl
			<< "Student patronomic: " << _Student.patronomic << endl
			<< "Student birthday: " << endl << _Student.birthDay << endl
			<< "Student place of residence: " << _Student.placeOfRsidence << endl
			<< "Student contact number: " << *_Student.contactNumber << endl;
		return os;
	}

	friend ostream& operator<<(ostream& os, const Student* _Student)
	{
		os
			<< "Student name: " << _Student->name << endl
			<< "Student surname: " << _Student->surname << endl
			<< "Student patronomic: " << _Student->patronomic << endl
			<< "Student birthday: " << endl << _Student->birthDay << endl
			<< "Student place of residence: " << _Student->placeOfRsidence << endl
			<< "Student contact number: " << *_Student->contactNumber << endl;
		return os;
	}

	friend istream& operator >>(istream& is, Student& _Student)
	{
		uint16_t* birthdate = new uint16_t[3]{};
		cout << "Enter student name: "; is >> _Student.name;
		cout << "Enter student surname: "; is >> _Student.surname;
		cout << "Enter student patronomic: "; is >> _Student.patronomic;
		cout << "Enter birth day: "; is >> birthdate[0];
		cout << "Enter birth month: "; is >> birthdate[1];
		cout << "Enter birth year: "; is >> birthdate[2];
		_Student.birthDay = new birthday(birthdate[0], birthdate[1], birthdate[2]);
		cout << "Enter place of residance: "; is >> _Student.placeOfRsidence;
		cout << "Enter contact number: "; is >> *_Student.contactNumber;
		for (size_t i = 0; i < 5; i++)
		{
			cout << "Enter grade " << i + 1 << ": "; is >> _Student.grades[i];
		};

		return is;
	}

	bool operator==(const Student& _Student) const
	{
		return (this->name == _Student.name &&
			this->surname == _Student.surname &&
			this->patronomic == _Student.patronomic &&
			this->birthDay->getDay() == _Student.birthDay->getDay() &&
			this->birthDay->getMonth() == _Student.birthDay->getMonth() &&
			this->birthDay->getYear() == _Student.birthDay->getYear() &&
			this->placeOfRsidence == _Student.placeOfRsidence &&
			*this->contactNumber == *_Student.contactNumber);
	}

	bool operator !=(const Student& _Student) const
	{
		return this->name != _Student.name &&
			this->surname != _Student.surname &&
			this->patronomic != _Student.patronomic &&
			this->birthDay->getDay() != _Student.birthDay->getDay() &&
			this->birthDay->getMonth() != _Student.birthDay->getMonth() &&
			this->birthDay->getYear() != _Student.birthDay->getYear() &&
			this->placeOfRsidence != _Student.placeOfRsidence &&
			*this->contactNumber != *_Student.contactNumber;
	}

	bool operator>(const Student& _Student) const
	{
		int average[2]{};
		for (size_t i = 0; i < 5; i++)
		{
			average[0] += this->grades[i];
		}

		for (size_t i = 0; i < 5; i++)
		{
			average[1] += _Student.grades[i];
		}

		return (average[0] / 5) > (average[1] / 5);
	}

	bool operator>=(const Student& _Student) const
	{
		int average[2]{};
		for (size_t i = 0; i < 5; i++)
		{
			average[0] += this->grades[i];
		}

		for (size_t i = 0; i < 5; i++)
		{
			average[1] += _Student.grades[i];
		}

		return (average[0] / 5) >= (average[1] / 5);
	}

	bool operator<(const Student& _Student) const
	{
		int average[2]{};
		for (size_t i = 0; i < 5; i++)
		{
			average[0] += this->grades[i];
		}

		for (size_t i = 0; i < 5; i++)
		{
			average[1] += _Student.grades[i];
		}

		return (average[0] / 5) < (average[1] / 5);
	}

	bool operator<=(const Student& _Student) const
	{
		int average[2]{};
		for (size_t i = 0; i < 5; i++)
		{
			average[0] += this->grades[i];
		}

		for (size_t i = 0; i < 5; i++)
		{
			average[1] += _Student.grades[i];
		}

		return (average[0] / 5) <= (average[1] / 5);
	}
};

