# include "Header.h"

void enter(int& numinator, int& denominator)
{
	cout << "Enter numerator: "; cin >> numinator;
	cout << "Enter denomenator: "; cin >> denominator;
}

void printResult(Drob result)
{
	cout << result.numenator;
	cout << endl;

	int per = result.numenator;
	int i{};

	while (per > 0)
	{
		i++;
		cout << "_";
		per /= 10;
	}

	int per2 = i / 2;
	cout << endl;

	while (per2 > 0)
	{
		cout << " ";
		per2--;
	}
	cout << result.denominator;
}


int main()
{
	int choise{}, numinator{}, denominator{};

	enter(numinator, denominator);
	Drob drob1(numinator, denominator);

	cout << "Enter choise: " << endl
		<< "1. Add" << endl
		<< "2. Subttract" << endl
		<< "3. Multiplicate" << endl
		<< "4. Division" << endl; cin >> choise;
	
	if (choise > 4 || choise < 1)
	{
		cout << "Invalid input! Please restart program.";
	}

	enter(numinator, denominator);
	Drob drob2(numinator, denominator);

	switch (choise)
	{
	case 1:
	{
		Drob res = drob1.add(drob2);
		printResult(res);
		break;
	}
	case 2:
	{
		Drob res = drob1.subtract(drob2);
		printResult(res);
		break;
	}
	case 3:
	{
		Drob res = drob1.multiplication(drob2);
		printResult(res);
		break;
	}
	case 4:
	{
		Drob res = drob1.division(drob2);
		printResult(res);
		break;
	}
	default:
		break;
	}


	return 0;
}