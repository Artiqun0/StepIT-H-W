#include <iostream>
using namespace std;

//Task 1

//void difference(int date1[], int date2[])
//{
//	int day[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int sum{}, difyear{};
//
//	if (date1[1] > date2[1])
//	{
//		int n{};
//		n = date1[1];
//		date1[1] = date2[1];
//		date2[1] = n;
//	}
//	if (date1[2] > date2[2])
//	{
//		int n{};
//		n = date1[2];
//		date1[2] = date2[2];
//		date2[2] = n;
//	}
//
//	if (date1[2] == date2[2])
//	{
//		for (size_t i = date1[1]; i < date2[1] - 1; i++)
//		{
//			sum += day[i];
//		}
//		sum += ((day[date1[1] - 1] - date1[0]) + date2[0]);
//		for (size_t i = date1[2]; i < date2[2] + 1; i++)
//		{
//			if (i % 4 == 0)
//				difyear += 1;
//		}
//		cout << sum;		
//	}
//	else if (date1[2] != date2[2])
//	{
//		for (size_t i = date1[1]; i < date2[1] - 1; i++)
//		{
//			sum += day[i];
//		}
//		sum += ((day[date1[1] - 1] - date1[0]) + date2[0]);
//		difyear = (date2[2] - date1[2]) * 365 + sum;
//		for (size_t i = date1[2]; i < date2[2] + 1; i++)
//		{
//			if (i % 4 == 0)
//				difyear += 1;
//		}
//		cout << difyear;
//	}
//}
//
//int main()
//{
//	int firstDate[3]{};
//	int secondDate[3]{};
//
//	cout << "Enter the day of the first date: "; cin >> firstDate[0];
//	cout << "Enter the month of the first date: "; cin >> firstDate[1];
//	cout << "Enter the year of the first date: "; cin >> firstDate[2];
//	cout << "Enter the day of the second date: "; cin >> secondDate[0];
//	cout << "Enter the month of the second date: "; cin >> secondDate[1];
//	cout << "Enter the year of the second date: "; cin >> secondDate[2];
//	
//	difference(firstDate, secondDate);
//
//	return 0;
//}

//Task2

//int average(int numbers[])
//{
//	int sum{};
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		sum += numbers[i];
//	}
//
//	return sum / 10;
//}
//
//int main()
//{
//	int arr[10]{};
//
//	srand(time(0));
//	for (size_t i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//
//	int res = average(arr);
//	cout << res;
//
//	return 0;
//}


//Task3

//void count(int numbers[])
//{
//	int count0{}, countneg{}, countpos{};
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		if (numbers[i] > 0)
//			countpos++;
//		else if (numbers[i] < 0)
//			countneg++;
//		else
//			count0++;
//	}
//
//	cout
//		<< "Count numbers less than 0: " << countneg << endl
//		<< "Count numbers greater than 0: " << countpos << endl
//		<< "Count numbers equal to 0: " << count0 << endl;
//}
//
//int main()
//{
//	int arr[10]{ 12, 51, 0, -4, 17, 0, -8, -6, 14, 54 };
//
//	count(arr);
//
//	return 0;
//}