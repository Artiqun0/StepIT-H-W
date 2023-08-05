#include <iostream>
using namespace std;

struct dateOfBirth
{
private:
	uint16_t* day{};
	uint16_t* month{};
	uint16_t* year{};
public:
	dateOfBirth(uint16_t _day, uint16_t _month, uint16_t _year)
	{
		this->day = new uint16_t(_day);
		this->month = new uint16_t(_month);
		this->year = new uint16_t(_year);
	}

	uint16_t getDay()
	{
		return *this->day;
	}

	uint16_t getMonth()
	{
		return *this->month;
	}

	uint16_t getYear()
	{
		return *this->year;
	}
};

class Student
{
public:
	string name{};
	string surname{};
	string patronomic{};
	string gender{};
	string adress{};
	string University{};
	string Faculty{};
	uint16_t* grades = new uint16_t[5]{};

	Student(string& _name, string& _surname, string& _patronomic, string& _gender, string& _adress, string& _University, string& _Faculty, uint16_t _grades[5],
		dateOfBirth& _dateOfBirth);

	uint16_t getDateOfBirth();
protected:
	dateOfBirth* _dateOfBirth;
};