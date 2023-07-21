#include "Class.h"

void enter(int& num, int& den)
{
	cout << "Enter the numerator of the fraction: "; cin >> num;
	cout << "Enter the denominator of the fraction: "; cin >> den;
}

int main()
{
	int choice{};
	int num{}, den{};

	enter(num, den);
	Fraction first(num, den);

	cout
		<< "Enter choice: " << endl
		<< "1. Addition" << endl
		<< "2. Subtraction" << endl
		<< "3. Multiplication" << endl
		<< "4. Divicion" << endl;
	cin >> choice;
	if (choice > 4 || choice <= 0)
		cout << "Invalid input! Good bye)";

	enter(num, den);
	Fraction second(num, den);

	if (choice == 1)
		cout << first + second;
	else if (choice == 2)
		cout << first - second;
	else if (choice == 3)
		cout << first * second;
	else if (choice == 4)
		cout << first / second;

	return 0;
}