#include <iostream>
using namespace std;

#pragma region Task1
//void sum(int* numbers, int length, int &resultsum, int &resultmultiple)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		resultsum += numbers[i];
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		resultmultiple *= numbers[i];
//	}
//}
//
//
//
//int main()
//{
//	int length{}, resultsum{}, resultmultiple = 1;
//	cout << "Enter length: "; cin >> length;
//
//	int* arr = new int(length);
//
//	srand(time(0));
//
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//		cout << arr[i];
//	}
//
//	sum(arr, length, resultsum, resultmultiple);
//
//	cout << resultsum << ' ' << resultmultiple;
//
//	return 0;
//}
#pragma endregion

#pragma region Task2
//void count(int* numbers, int length, int &negative, int &positive, int &null)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		if (numbers[i] < 0)
//		{
//			negative++;
//		}
//		else if (numbers[i] > 0)
//		{
//			positive++;
//		}
//		else
//		{
//			null++;
//		}
//	}
//}
//
//int main()
//{
//	int length{}, negative{}, positive{}, null{};
//	cout << "Enter length: "; cin >> length;
//
//	int* arr = new int[length];
//
//	srand(time(0));
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//		cout << arr[i];
//	}
//
//	count(arr, length, negative, positive, null);
//	cout << negative << ' ' << positive << ' ' << null;
//
//	return 0;
//}
#pragma endregion

#pragma region Task3
//void subsets(int* numbers1, int* numbers2, int length1, int length2)
//{
//	for (size_t i = 0; i < length1; i++)
//	{
//		if (numbers)
//		{
//
//		}
//	}
//}
//
//int main()
//{
//	int length1{}, length2{};
//	if (length2 > length1)
//	{
//		int a{};
//		a = length2;
//		length2 = length1;
//		length1 = a;
//	}
//
//	cout << "Enter length1: "; cin >> length1;
//	cout << "Enter length2: "; cin >> length2;
//
//	int* arr1 = new int[length1];
//	int* arr2 = new int[length2];
//
//	srand(time(0));
//	for (size_t i = 0; i < length1; i++)
//	{
//		arr1[i] = rand() % 10 + 1;
//	}
//	for (size_t i = 0; i < length2; i++)
//	{
//		arr2[i] = rand() % 10 + 1;
//	}
//
//	subsets(arr1, arr2, length1, length2);
//
//	return 0;
//}
#pragma endregion