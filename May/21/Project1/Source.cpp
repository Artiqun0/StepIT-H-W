#include "Header.h";

Drob reduction(Drob drob1)
{
	int num{};

	if (drob1.denominator > drob1.numenator)
		num = drob1.numenator;
	else
		num = drob1.denominator;

	for (size_t i = num; i > 0; i--)
	{
		int y1 = 3, y2 = 4;
		if (drob1.numenator % i == 0)
			y1 = 1;
		if (drob1.denominator % i == 0)
			y2 = 1;

		if (y1 == y2)
		{
			num = i;
			break;
		}
	}

	drob1.numenator /= num;
	drob1.denominator /= num;

	return drob1;
}

Drob Drob :: add(Drob drob1)
{
	Drob drob2{};

	drob2.numenator = (drob1.numenator * denominator) + (drob1.denominator * numenator);
	drob2.denominator = (denominator * numenator);

	return reduction(drob2);
}

Drob Drob::subtract(Drob drob1)
{
	Drob drob2{};
	int num = 1;

	if (drob1.denominator > denominator) // finding common denominator
	{
		while (drob1.denominator * num % denominator != 0) num++;
		drob2.denominator = drob1.denominator * num;
	}
	else
	{
		while (denominator * num % drob1.denominator != 0) num++;
		drob2.denominator = denominator * num;
	}

	drob2.numenator = (numenator * (drob2.denominator / denominator)) - (drob1.numenator * drob2.denominator / drob1.denominator);

	return reduction(drob2);
}

Drob Drob::multiplication(Drob drob1)
{
	Drob drob2{};

	drob2.denominator = denominator * drob1.denominator;
	drob2.numenator = numenator * drob1.numenator;

	return reduction(drob2);
}

Drob Drob::division(Drob drob1)
{
	Drob drob2{};

	drob2.denominator = denominator * drob1.numenator;
	drob2.numenator = numenator * drob1.denominator;

	return reduction(drob2);
}