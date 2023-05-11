#include <iostream>
using namespace std;

int task1(int number, int degree);

//Task1

//int main()
//{
//	// task 1
//	int number{}, degree{}, res{};
//	cout << "Enter number: "; cin >> number;
//	cout << "Enter degree: "; cin >> degree;
//	res = task1(number, degree);
//	cout << res;
//
//	return 0;
//}
//
//int task1(int number, int degree)
//{
//	int result = 1;
//	for (size_t i = 1; i <= degree; i++)
//	{
//		result = result * number;
//	}
//
//	return result;
//}

//Task2

//void task2(int start, int end)
//{
//	int sum{};
//
//	for (size_t i = start + 1; i < end; i++)
//	{
//		sum += i;
//	}
//
//	cout << sum;
//}
//
//int main()
//{
//	int start{}, end{};
//
//	cout << "Enter start range: "; cin >> start;
//	cout << "Enter end range: "; cin >> end;
//
//	task2(start, end);
//
//	return 0;
//}

//Task3

//void task3(int number)
//{
//	int sum{};
//
//	for (size_t i = 1; i < number; i++)
//	{
//		if (number % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == number)
//	{
//		cout << "This number is perfect";
//	}
//	else
//	{
//		cout << "This number is not perfect";
//	}
//}
//
//int main()
//{
//	int number{};
//
//	cout << "Enter number: "; cin >> number;
//	
//	task3(number);
//
//	return 0;
//}

//Task4

//void task4(int number)
//{
//	int sum1{}, sum2{};
//
//	for (size_t i = 100000, j = 0; j < 3; j++, i /= 10)
//	{
//		sum1 += number / i % 10;
//	}
//	for (size_t i = 100, j = 0; j < 3; j++, i /= 10)
//	{
//		sum2 += number / i % 10;
//	}
//
//	if (sum1 == sum2)
//	{
//		cout << "This number is lucky";
//	}
//	else
//	{
//		cout << "This number is not lucky";
//	}
//}
//
//int main()
//{
//	int number{};
//	cout << "Enter number: "; cin >> number;
//
//	task4(number);
//
//	return 0;
//}
