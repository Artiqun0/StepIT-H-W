#include <iostream>
#include "Funcsions.h"
using namespace std;

int (*Action[])(int*, int*, int, int) { max, min, avg };

int main()
{
	int length1{}, length2{};
	cout << "Enter length1 and length2:"; cin >> length1 >> length2;

	int* numbers1 = new int[length1];
	int* numbers2 = new int[length2];

	srand(time(0));
	for (size_t i = 0; i < length1; i++)
		numbers1[i] = rand() % 100 + 1;
	for (size_t i = 0; i < length2; i++)
		numbers2[i] = rand() % 100 + 1;

	int choice{};
	cout
		<< "1. Maximum" << endl
		<< "2. Minimum" << endl
		<< "3. Average" << endl;
	cin >> choice;

	cout << Action[choice - 1](numbers1, numbers2, length1, length2);

	return 0;
}