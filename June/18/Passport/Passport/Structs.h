#include <iostream>
using namespace std;


struct dateOfBirth
{
protected:
	uint16_t* day{};
	uint16_t* month{};
	uint16_t* year{};
public:
	dateOfBirth(uint16_t& _day, uint16_t& _month, uint16_t& _year);

	uint16_t getDay() const;

	uint16_t getMonth() const;

	uint16_t getYear() const;
};

struct dateOfIssue : protected dateOfBirth
{
public:
	dateOfIssue(uint16_t& _day, uint16_t& _month, uint16_t& _year);
};

struct dateOfExpiry : protected dateOfBirth
{
public:
	dateOfExpiry(uint16_t& _day, uint16_t& _month, uint16_t& _year);
};