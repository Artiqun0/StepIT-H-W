#include "Structs.h"

dateOfBirth::dateOfBirth(uint16_t& _day, uint16_t& _month, uint16_t& _year)
{
	this->day = new uint16_t(_day);
	this->month = new uint16_t(_month);
	this->year = new uint16_t(_year);
}

uint16_t dateOfBirth::getDay() const
{
	return *this->day;
}

uint16_t dateOfBirth::getMonth() const
{
	return *this->month;
}

uint16_t dateOfBirth::getYear() const
{
	return *this->year;
}

dateOfIssue::dateOfIssue(uint16_t& _day, uint16_t& _month, uint16_t& _year) : dateOfBirth(_day, _month, _year) {};


dateOfExpiry::dateOfExpiry(uint16_t& _day, uint16_t& _month, uint16_t& _year) : dateOfBirth(_day, _month, _year) {};