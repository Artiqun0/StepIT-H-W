#include <iostream>
#include <string>

using namespace std;

class Circle
{
public:
	int radius{};
	int diameter{};

	Circle() = default;

	Circle(int _radius, int _diameter)
	{
		this->radius = _radius;
		this->diameter = _diameter;
	}

	friend ostream& operator << (ostream& os, const Circle& _Circle)
	{
		os << _Circle.radius << endl << _Circle.diameter << endl;
		return os;
	}

	bool operator==(const Circle& _Circle) const
	{
		return this->radius == _Circle.radius && this->diameter == _Circle.diameter;
	}

	bool operator!=(const Circle& _Circle) const
	{
		return !(*this == _Circle);
	}

	bool operator>(const Circle& _Circle) const
	{
		return this->radius > _Circle.radius && this->diameter > _Circle.diameter;
	}

	bool operator>=(const Circle& _Circle) const
	{
		return this->radius >= _Circle.radius && this->diameter >= _Circle.diameter;
	}

	bool operator<(const Circle& _Circle) const
	{
		return this->radius < _Circle.radius&& this->diameter < _Circle.diameter;
	}

	bool operator<=(const Circle& _Circle) const
	{
		return this->radius <= _Circle.radius && this->diameter <= _Circle.diameter;
	}

	Circle operator+=(const int& add)
	{
		this->radius += add;
		this->diameter += (add * 2);

		return *this;
	}

	Circle operator-=(const int& minus)
	{
		this->radius -= minus;
		this->diameter -= (minus * 2);

		return *this;
	}
};