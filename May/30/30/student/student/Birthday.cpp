#include "Birthday.h"

birthday::birthday(uint16_t& _day, uint16_t& _month, uint16_t& _year)
{
	*this->day = _day;
	*this->month = _month;
	*this->year = _year;
}

uint16_t birthday::getDay() const
{
	return *this->day;
}

uint16_t birthday::getMonth() const
{
	return *this->month;
}

uint16_t birthday::getYear() const
{
	return *this->year;
}