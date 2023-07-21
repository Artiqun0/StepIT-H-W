#pragma once
#pragma once
#include "Student.h"

class Classroom
{
private:
	uint16_t* capacity = new uint16_t{};
public:
	string nameClass{};
	Student* Students{};
	uint16_t* countStudent = new uint16_t{};

	Classroom(string& _nameClass, uint16_t& _capacity);

	uint16_t getCapacity() const;

	friend ostream& operator <<(ostream& os, const Classroom _Classroom)
	{
		for (size_t i = 0; i < *_Classroom.countStudent; i++)
		{
			os << _Classroom.Students[i].getName();
		}

		return os;
	}

	friend istream& operator >>(istream& is, Classroom& _Classroom)
	{
		cout << "Enter class name: ";
		is >> _Classroom.nameClass;

		cout << "Enter capacity class: ";
		is >> *_Classroom.capacity;

		return is;
	}

	bool operator ==(const Classroom _Classroom) const
	{
		return this->nameClass == _Classroom.nameClass && *this->capacity == *_Classroom.capacity;
	}

	bool operator !=(const Classroom _Classroom) const
	{
		return this->nameClass != _Classroom.nameClass && *this->capacity == *_Classroom.capacity;
	}

	bool operator >(const Classroom _Classroom) const
	{
		return  *this->capacity > *_Classroom.capacity;
	}

	bool operator >=(const Classroom _Classroom) const
	{
		return  *this->capacity >= *_Classroom.capacity;
	}

	bool operator <(const Classroom _Classroom) const
	{
		return  *this->capacity < *_Classroom.capacity;
	}

	bool operator <=(const Classroom _Classroom) const
	{
		return  *this->capacity <= *_Classroom.capacity;
	}

};