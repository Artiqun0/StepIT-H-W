#include <iostream>
using namespace std;

//Task1

//int degree(int rnumber, int rdegre)
//{
//	if (rdegre == 0)
//	{
//		return 1;
//	}
//	return rnumber * degree(rnumber, rdegre - 1);
//}
//
//int main()
//{
//	int number{};
//	int degre{};
//
//	cout << "Enter number: "; cin >> number;
//	cout << "Enter degree: "; cin >> degre;
//
//	int res = degree(number, degre);
//
//	cout << res;
//
//	return 0;
//}


//Task2

//char stars(int N)
//{
//	if (N == 0)
//	{
//		return 1;
//	}
//	cout << '*';
//	return stars(N - 1);
//}
//
//int main()
//{
//	int N{};
//
//	cout << "Enter N: "; cin >> N;
//
//	stars(N);
//
//	return 0;
//}

//Task3

//int sum(int number1, int number2)
//{
//	if (number1 == number2)
//	{
//		return number1;
//	}
//	return  number1 + sum(number1 + 1, number2);
//}
//
//int main()
//{
//	int number1{};
//	int number2{};
//
//	cout << "Enter number1: "; cin >> number1;
//	cout << "Enter number2: "; cin >> number2;
//
//	cout << sum(number1, number2);
//
//	return 0;
//}

//Task4

//int sum[3]{ 0, 1001, 0 };
//void min(int numbers[], int i)
//{
//	for (size_t j = i; j < i + 10; j++)
//	{
//		sum[0] += numbers[j];
//	}
//
//	if (sum[1] > sum[0])
//	{
//		sum[1] = sum[0];
//		sum[2] = i;
//	}
//	sum[0] = 0;
//
//	if (i == 90)
//	{
//		cout <<"Minimum index: " <<  sum[2];
//		return;
//	}
//
//	min(numbers, i + 1);
//}
//
//int main()
//{
//	int arr[100]{};
//
//	srand(time(0));
//	for (size_t i = 0; i < 100; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//	}
//
//	for (size_t i = 0; i < 100; i++)
//	{
//		cout << arr[i] << ' ';
//		if ((i + 1) % 10 == 0)
//			cout << endl;
//	}
//	cout << endl;
//
//	min(arr, 0);
//	return 0;
//}


//Task5

//int maxx(int numbers[])
//{
//	int num = numbers[0];
//
//	for (size_t i = 1; i < 10; i++)
//	{
//		if (numbers[i] > num)
//		{
//			num = numbers[i];
//		}
//	}
//
//	return num;
//}
//
//int maxx(int numbers[2][5])
//{
//	int num = numbers[0][0];
//
//	for (size_t i = 0; i < 2; i++)
//	{
//		for (size_t j = 1; j < 5; j++)
//		{
//			if (numbers[i][j] > num)
//			{
//				num = numbers[i][j];
//			}
//		}
//	}
//
//	return num;
//}
//
//int maxx(int num1, int num2)
//{
//	if (num1 > num2)
//	{
//		return num1;
//	}
//	else
//	{
//		return num2;
//	}
//}
//
//int maxx(int num1, int num2, int num3)
//{
//	if (num1 > num2 && num1 > num3)
//	{
//		return num1;
//	}
//	else if (num2 > num1 && num2 > num3)
//	{
//		return num2;
//	}
//	else
//	{
//		return num3;
//	}
//}
//
//int main()
//{
//	//Part1
//	int arr1[10]{};
//	
//	for (size_t i = 0; i < 10; i++)		
//	{
//		cout << "Enter number " << i + 1 << ':'; cin >> arr1[i];
//	}
//	
//	int res1 = maxx(arr1);
//	cout << "Max number in array: " << res1;
//
//	cout << endl;
//	//Part2
//	int arr2[2][5]{};
//
//	for (size_t j = 0; j < 2; j++)
//	{
//		for (size_t i = 0; i < 5; i++)
//		{
//			cout << "Enter number " << i + 1 << " in array " << j + 1 << ':'; cin >> arr2[j][i];
//		}
//	}
//
//	int res2 = maxx(arr2);
//	cout << "Max number in arrays: " << res2;
//
//	cout << endl;
//	//Part3 and 4
//	int number1{}, number2{}, number3{};
//
//	cout << "Enter number 1: "; cin >> number1;
//	cout << "Enter number 2: "; cin >> number2;
//	cout << "Enter number 3: "; cin >> number3;
//	
//	int res3 = maxx(number1, number2);
//	cout << "Max number: " << res3;
//	cout << endl;
//	int res4 = maxx(number1, number2, number3);
//	cout << "Max number: " << res4;
//
//	return 0;
//}