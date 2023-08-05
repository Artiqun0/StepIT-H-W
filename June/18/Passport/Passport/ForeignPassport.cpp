#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string& _name, string& _surname, string& _gender, dateOfBirth& _DateOfBirth, dateOfIssue& _DateOfIssue, dateOfExpiry& _DateOfExpiry,
	uint16_t& _passportNO, string& _placeOfBirth, string& _authority, visa& _visa, uint16_t& _foreignPassportNumber, string _issuingAuthority,
	uint16_t& borderCrossingData) : Passport(_name, _surname, _gender, _DateOfBirth, _DateOfIssue, _DateOfExpiry,
		_passportNO, _placeOfBirth, _authority)
{
	this->Visa = new visa(_visa);
	this->foreignPassportNumber = new uint16_t(_foreignPassportNumber);
	this->issuingAuthority = _issuingAuthority;
	this->borderCrossingData = new uint16_t(borderCrossingData);
}

visa::visa(string& _name, string& _surname, string& _patronomic, uint16_t& _visaNO, uint16_t& _numberOfDaysOfStay,
	string& _purposeOfEntry, string& _visaType)
{
	this->name = _name;
	this->surname = _surname;
	this->patronomic = _patronomic;
	this->visaNO = new uint16_t(_visaNO);
	this->numberOfDaysOfStay = new uint16_t(_numberOfDaysOfStay);
	this->purposeOfEntry = _purposeOfEntry;
	this->visaType = _visaType;
}

uint16_t visa::getVisaNO() const
{
	return *this->visaNO;
}

uint16_t ForeignPassport::getForeignPassportNumber() const
{
	return *this->foreignPassportNumber;
}

string ForeignPassport::getIssuingAuthority() const
{
	return this->issuingAuthority;
}

uint16_t ForeignPassport::getBorderCrossingData() const
{
	return *this->borderCrossingData;
}

visa ForeignPassport::getVisa() const
{
	return *this->Visa;
}