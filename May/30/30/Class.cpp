#include "Class.h"

Fraction reduction(Fraction& c)
{
	int num{};

	if (c.denominator > c.numerator)
		num = c.numerator;
	else
		num = c.denominator;

	for (size_t i = num; i > 0; i--)
	{
		int y1 = 3, y2 = 4;
		if (c.numerator % i == 0)
			y1 = 1;
		if (c.denominator % i == 0)
			y2 = 1;

		if (y1 == y2)
		{
			num = i;
			break;
		}
	}

	c.numerator /= num;
	c.denominator /= num;

	return c;
}

Fraction& Fraction :: operator+(Fraction& b)
{
	Fraction c{};

	c.numerator = (numerator * b.denominator) + (b.numerator * denominator);
	c.denominator = denominator * b.denominator;

	return c = reduction(c);
}


Fraction& Fraction :: operator-(Fraction& b)
{
	Fraction c{};

	int num = 1;
	if (b.denominator > denominator)
	{
		while ((b.denominator * num) % denominator != 0)
			num++;
		c.denominator = b.denominator * num;
	}
	else
	{
		while ((denominator * num) % b.denominator != 0)
			num++;
		c.denominator = denominator * num;
	}

	c.numerator = (numerator * (c.denominator / denominator)) - (b.numerator * (c.denominator / b.denominator));

	return c = reduction(c);
}


Fraction& Fraction :: operator*(Fraction& b)
{
	Fraction c{};

	c.numerator = numerator * b.numerator;
	c.denominator = denominator * b.denominator;

	return c = reduction(c);;
}


Fraction& Fraction :: operator/(Fraction& b)
{
	Fraction c{};

	c.numerator = numerator * b.denominator;
	c.denominator = denominator * b.numerator;

	return c = reduction(c);
}