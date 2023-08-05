#include "Student.h"

Student::Student(string& _name, string& _surname, string& _patronomic, string& _gender, string& _adress, string& _University, string& _Faculty, uint16_t _grades[5],
	dateOfBirth& _dateOfBirth)
{
	this->name = _name;
	this->surname = _surname;
	this->patronomic = _patronomic;
	this->gender = _gender;
	this->adress = _adress;
	this->University = _University;
	this->Faculty = _Faculty;
	for (size_t i = 0; i < 5; i++)
	{
		this->grades[i] = _grades[i];
	}
	this->_dateOfBirth = new dateOfBirth(_dateOfBirth.getDay(), _dateOfBirth.getMonth(), _dateOfBirth.getYear());
}

uint16_t Student::getDateOfBirth()
{
	int choice{};

	cout
		<< "Enter your choice: " << endl
		<< "1. Return day" << endl
		<< "2. Return month" << endl
		<< "3. Return year" << endl;

	switch (choice)
	{
	case 1:
		return this->_dateOfBirth->getDay();
	case 2:
		return this->_dateOfBirth->getMonth();
	case 3:
		return this->_dateOfBirth->getYear();
	}
}