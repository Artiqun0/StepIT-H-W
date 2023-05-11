#include <iostream>
using namespace std;

//Task min, max, sredniy arifmet, factorial, factorial sum

int main()
{
	int arr[3][3]{
		{4, 7, 2},
		{6, 8, 5 },
		{9, 8, 9}
	};
	int arrFactorial[3][3]{
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	int sum{}, count{}, factorial = 1, per{}, sumFactorial{};
	int min = arr[0][0], max = arr[0][0];

	for (size_t i = 0; i < 3; i++)
	{

		for (size_t j = 0; j < 3; j++)
		{
			sum += arr[i][j];
			count++;
		}

		for (size_t a = 0; a < 3; a++)
		{
			if (min > arr[i][a])
			{
				min = arr[i][a];
			}
		}

		for (size_t b = 0; b < 3; b++)
		{
			if (max < arr[i][b])
			{
				max = arr[i][b];
			}
		}

		for (size_t j = 0; j < 3; j++)
		{
			per = arr[i][j];
			while (per > 1)
			{
				factorial = factorial * per;
				per--;

			}
			arrFactorial[i][j] = factorial;
			sumFactorial += factorial;
			factorial = 1;
		}
	}

	cout << "sredneee arefmet: " << (float)sum / count << endl;
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	cout << "factorials: " << endl;
	for (size_t i = 0; i < 3; i++)
	{

		for (size_t j = 0; j < 3; j++)
		{
			cout << arrFactorial[i][j] << " ";
		}
		cout << endl;
	}
	cout << "factorial summ: " << sumFactorial;

	return 0;
}