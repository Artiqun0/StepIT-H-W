#include "Header.h";

Drob reduction(Drob drob1)
{
	int num{};
	bool check1{}, check2{};

	if (drob1.denominator == drob1.numenator)
	{
		drob1.denominator = 1;
		drob1.numenator = 1;
		return drob1;
	}

	else if (drob1.denominator > drob1.numenator)
	{
		num = drob1.numenator / 2;
	}
	else if (drob1.denominator < drob1.numenator)
	{
		num = drob1.denominator / 2;
	}

	for (size_t i = 2; i < num; i++)
	{
		if (drob1.denominator % i == 0)
		{
			check1 = true;
		}
		if (drob1.numenator % i == 0)
		{
			check2 = true;
		}

		if (check1 && check2)
		{
			num = i;
			break;
		}

		check1 = false, check2 = false;
	}

	drob1.numenator /= num;
	drob1.denominator /= num;

	return drob1;
}

Drob Drob :: add(Drob drob1)
{
	Drob drob2{};

	if (drob1.denominator == denominator)
	{
		drob2.numenator = drob1.numenator + numenator;
		drob2.denominator = denominator + drob1.denominator;
		return drob1;

	}
	drob2.numenator = (drob1.numenator * denominator) + (drob1.denominator * numenator);
	drob2.denominator = (denominator * numenator);

	return drob2;
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