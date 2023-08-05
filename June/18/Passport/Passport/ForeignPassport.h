#include "Passport.h"

class visa
{
private:
	uint16_t* visaNO{};
public:
	string name{};
	string surname{};
	string patronomic{};
	uint16_t* numberOfDaysOfStay{};
	string purposeOfEntry{};
	string visaType{};

	visa(string& _name, string& _surname, string& _patronomic, uint16_t& _visaNO, uint16_t& _numberOfDaysOfStay,
		string& _purposeOfEntry, string& _visaType);

	uint16_t getVisaNO() const;
};


class ForeignPassport : protected Passport
{
private:
	uint16_t* foreignPassportNumber{};
	string issuingAuthority{};
	uint16_t* borderCrossingData{};
	visa* Visa;
public:
	ForeignPassport(string& _name, string& _surname, string& _gender, dateOfBirth& _DateOfBirth, dateOfIssue& _DateOfIssue, dateOfExpiry& _DateOfExpiry,
		uint16_t& _passportNO, string& _placeOfBirth, string& _authority, visa& _visa, uint16_t& _foreignPassportNumber, string _issuingAuthority,
		uint16_t& borderCrossingData);

	uint16_t getForeignPassportNumber() const;
	string getIssuingAuthority() const;
	uint16_t getBorderCrossingData() const;
	visa getVisa() const;
};
