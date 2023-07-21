#pragma once
#include <iostream>
#include <string>
using namespace std;

struct birthday
{
private:
	uint16_t* day = new uint16_t{};
	uint16_t* month = new uint16_t{};
	uint16_t* year = new uint16_t{};
public:
	birthday(uint16_t& _day, uint16_t& _month, uint16_t& _year);

	uint16_t getDay() const;
	uint16_t getMonth() const;
	uint16_t getYear() const;

	friend ostream& operator << (ostream& os, const birthday* _Birthday)
	{
		os
			<< "Birth day: " << *_Birthday->day << endl
			<< "Birth month: " << *_Birthday->month << endl
			<< "Birth year: " << *_Birthday->year;
		return os;
	}

	friend ostream& operator << (ostream& os, const birthday& _Birthday)
	{
		os
			<< "Birth day: " << *_Birthday.day << endl
			<< "Birth month: " << *_Birthday.month << endl
			<< "Birth year: " << *_Birthday.year;
		return os;
	}
};