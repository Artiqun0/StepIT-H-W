#include "Student.h"

class Aspirant : protected Student
{
public:
	string Specialization{};
	string Courses{};
	string publications{};
	string conferences{};
	string awardsAndAchievements{};
	string researchProject{};
	string Laboratory{};

	Aspirant(string& _name, string& _surname, string& _patronomic, string& _gender, string& _adress, string& _University, string& _Faculty, uint16_t _grades[5],
		dateOfBirth& _dateOfBirth, string& _Specialization, string& _Courses, string& _publications, string& _conferences, string& _awardsAndAchievements,
		string& _researchProject, string& _Laboratory, uint16_t& numberAspirant) :
		Student(_name, _surname, _patronomic, _gender, _adress, _University, _Faculty, &_grades[5], _dateOfBirth)
	{
		this->Specialization = _Specialization;
		this->Courses = _Courses;
		this->publications = _publications;
		this->conferences = _conferences;
		this->awardsAndAchievements = _awardsAndAchievements;
		this->researchProject = _researchProject;
		this->Laboratory = _Laboratory;
		this->numberAspirant = new uint16_t(numberAspirant);
	}

	uint16_t getNumberAspirant()
	{
		return *this->numberAspirant;
	}
private:
	uint16_t* numberAspirant{};
};