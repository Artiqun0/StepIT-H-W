#include <iostream>
using namespace std;

// task 1
//int main()
//{
//	int a{};
//	int res{};
//	cout << "Enter number till 500: "; cin >> a;
//
//	while (a <= 500)
//	{
//		res += a;
//		a++;
//	}
//	cout << res;
//	return 0;
//}

//task2
//int main()
//{
//	int x{};
//	int y{};
//	int res = 1;
//	cout << "Enter x: "; cin >> x;
//	cout << "Enter y: "; cin >> y;
//	while (y > 0)
//	{
//		res = res * x;
//		y--;
//	}
//	cout << res;
//
//	return 0;
//}

// task 3
//int main()
//{
//	int result{};
//	int start{};
//	while (start <= 1000)
//	{
//		result += start;
//		start++;
//	}
//	result = result / start;
//	cout << result;
//	return 0;
//}

// task 4
int main()
{
	int a{};
	int res = 1;
	cout << "Enter number till 20: "; cin >> a;
	while (a <= 20)
	{
		res = res * a;
		a++;
	}
	cout << res;
	return 0;
}