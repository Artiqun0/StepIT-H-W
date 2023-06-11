#include <iostream>
using namespace std;

struct birthday
{
private:
	uint16_t day{};
	uint16_t month{};
	uint16_t year{};
public:
	birthday(uint16_t day, uint16_t month, uint16_t year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	uint16_t getDay();
	uint16_t getMonth();
	uint16_t getYear();
};

class student
{
private:
	birthday* DateOfBirth{};
	string nameOfTheInstitution{};
	string instituteCountry{};
	string instituteCity{};
public:
	string name{};
	string surname{};
	string contactNumber{};
	string city{};
	string country{};
	string group{};

	student(string nameOfTheInstitution, string instituteCountry, string instituteCity,
		string name, string surname, string contactNumber, string city, string country,
		string nameGroup, uint16_t day, uint16_t month, uint16_t year)
	{
		this->nameOfTheInstitution = nameOfTheInstitution;
		this->instituteCountry = instituteCountry;
		this->instituteCity = instituteCity;
		this->name = name;
		this->surname = surname;
		this->contactNumber = contactNumber;
		this->city = city;
		this->country = country;
		this->group = nameGroup;
		birthday* d = new birthday(day, month, year);
		DateOfBirth = d;
	}

	string getNameUNI();
	string getCountryUNI();
	string getCityUNI();

	void printDataStudent() const;

	void getDateOfBirth(int c) const;
};

class Database
{
public:
	student* person{};
	uint16_t count{};
};
