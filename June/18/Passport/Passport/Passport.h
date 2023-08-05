#include "Structs.h"

class Passport
{
public:
	string name{};
	string surname{};
	string gender{};

	Passport(string& _name, string& _surname, string& _gender, dateOfBirth& _DateOfBirth, dateOfIssue& _DateOfIssue, dateOfExpiry& _DateOfExpiry,
		uint16_t& _passportNO, string& _placeOfBirth, string& _authority);

	dateOfBirth getDateOfBirth() const;
	dateOfIssue getDateOfIssue() const;
	dateOfExpiry getDateOfExpiry() const;
	uint16_t getPassportNO() const;
	string getPlaceOfBirth() const;
	string getAuthority() const;
protected:
	dateOfBirth* DateOfBirth{};
	dateOfIssue* DateOfIssue{};
	dateOfExpiry* DateOfExpiry{};
	uint16_t* passportNO{};
	string placeOfBirth{};
	string authority{};
};