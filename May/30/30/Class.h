#include <iostream>
#include <string>
using namespace std;

class Fraction
{
public:
	int numerator{}; // числитель
	int denominator{}; // знаменатель

	Fraction() = default;

	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	friend ostream& operator << (ostream& os, const Fraction answer)
	{
		cout
			<< "Numerator: " << answer.numerator << endl
			<< "Denominator: " << answer.denominator << endl;
		return os;
	}

	Fraction& operator+(Fraction& b);
	Fraction& operator-(Fraction& b);
	Fraction& operator*(Fraction& b);
	Fraction& operator/(Fraction& b);
};