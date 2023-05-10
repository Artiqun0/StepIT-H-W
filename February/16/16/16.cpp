//Task 1
//#include <iostream>
//using namespace std;
//
//int num = 100;
//
//int main()
//{
//	while (num <= 999)
//	{
//		int a, b, c{};
//		a = ((num / 10) / 10);
//		b = ((num / 10) % 10);
//		c = (num % 10);
//		if (a == b || a == c || b == c)
//		{
//			cout << num << endl;
//		}
//		
//		num++;
//	}
//}
//Task 2
//#include <iostream>
//using namespace std;
//
//int num = 100;
//
//int main()
//{
//	while (num <= 999)
//	{
//		int a, b, c{};
//		a = ((num / 10) / 10);
//		b = ((num / 10) % 10);
//		c = (num % 10);
//		if (a != b && a != c && b != c)
//		{
//			cout << num << endl;
//		}
//		
//		num++;
//	}
//}
//Task 3
//#include <iostream>
//using namespace std;
//
//int number, num, result{};
//int divider = 1;
//int main()
//{
//	cout << "Enter number: "; cin >> number;
//	while ((number / divider) != 0)
//	{
//		divider *= 10;
//	}
//	divider /= 10;
//
//
//	while (divider >= 1)
//	{
//		num = (number / divider) % 10;
//		divider /= 10;
//		if (num != 3 && num != 6)
//		{
//			result = (result * 10) + num;
//		}
//	
//	}
//	cout << result;
//}
//Task 4
//#include <iostream>
//using namespace std;
//
//int numbersin = 0 , num{};
//int main()
//{
//	cout << "Enter number: "; cin >> num;
//	while (numbersin < num)
//	{
//		int num2, num3{};
//		numbersin++;
//		num2 = numbersin * numbersin;
//		num3 = numbersin * numbersin * numbersin;
//		if (num % num2 == 0 && num % num3 == 0)
//		{
//			cout << numbersin << endl;
//		}
//	}
//}
//Task 5
//#include <iostream>
//using namespace std;
//
//int remainders, number, result{};
//int main()
//{
//	cout << "Enter number: "; cin >> number;
//	while (number != 0)
//	{
//		remainders = number % 10;
//		result += remainders;
//		number = number / 10;
//	}
//	int cube, square{};
//	cube = result * result * result;
//	square = number * number;
//	if (cube == square)
//	{
//		cout << "True";
//	}
//	else
//	{
//		cout << "False";
//	}
//}
//Task 6
//#include <iostream>
//using namespace std;
//
//int number, num{};
//
//int main()
//{
//	cout << "Enter number: "; cin >> number;
//
//	while (num < number)
//	{
//		num++;
//		if (number % num == 0)
//		{
//			cout << num << endl;
//		}
//	}
//}
//Task 7
//#include <iostream>
//using namespace std;
//
//int number1, number2{};
//int main()
//{
//	cout << "Enter number1: "; cin >> number1;
//	cout << "Enter number2: "; cin >> number2;
//	if (number2 < number1)
//	{
//		int number3{};
//		number3 = number2;
//		number2 = number1;
//		number1 = number3;
//	}
//	int divider{};
//	while (divider < number2)
//	{
//		divider++;
//		if (number1 % divider == 0 && number2 % divider == 0)
//		{
//			cout << divider;
//		}
//	}
//}