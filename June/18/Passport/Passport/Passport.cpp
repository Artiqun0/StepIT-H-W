#include "Passport.h"

Passport::Passport(string& _name, string& _surname, string& _gender, dateOfBirth& _DateOfBirth, dateOfIssue& _DateOfIssue, dateOfExpiry& _DateOfExpiry,
	uint16_t& _passportNO, string& _placeOfBirth, string& _authority)
{
	this->name = _name;
	this->surname = _surname;
	this->gender = _gender;
	this->DateOfBirth = new dateOfBirth(_DateOfBirth);
	this->DateOfIssue = new dateOfIssue(_DateOfIssue);
	this->DateOfExpiry = new dateOfExpiry(_DateOfExpiry);
	this->passportNO = new uint16_t(_passportNO);
	this->placeOfBirth = _placeOfBirth;
	this->authority = _authority;
}

dateOfBirth Passport::getDateOfBirth() const
{
	return *this->DateOfBirth;
}

dateOfIssue Passport::getDateOfIssue() const
{
	return *this->DateOfIssue;
}

dateOfExpiry Passport::getDateOfExpiry() const
{
	return *this->DateOfExpiry;
}

uint16_t Passport::getPassportNO() const
{
	return *this->passportNO;
}

string Passport::getPlaceOfBirth() const
{
	return this->placeOfBirth;
}

string Passport::getAuthority() const
{
	return this->authority;
}