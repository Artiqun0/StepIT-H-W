#include <iostream>;
using namespace std;

class Drob
{
public:
	int denominator{};
	int numenator{};

	Drob() = default;

	Drob(int numenator, int denominator)
	{
		this->denominator = denominator;
		this->numenator = numenator;
	}

	Drob add(Drob drob1);
	Drob subtract(Drob drob1);
	Drob multiplication(Drob drob1);
	Drob division(Drob drob1);
};


