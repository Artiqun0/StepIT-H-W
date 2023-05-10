#include <iostream>
using namespace std;
// task 1
//int main()
//{
//	char string{};
//	int num{};
//
//	cout << "Enter the symbol: "; cin >> string;
//
//	num = char(string) + 0;
//
//	if (num > 47 && num < 58)
//		cout << "This's number." << endl;
//
//	else if ((num > 64 && num < 91) || (num > 96 && num < 123))
//		cout << "This's letter." << endl;
//
//	else
//		cout << "This's other symbol." << endl;
//	return 0;
//}

//task 2
//int main()
//{
//	string operat{};
//	string operat2{};
//	int nar_counter = 10;
//	int bakcell_counter = 7;
//	int azercell_counter = 5;
//	int time{};
//	
//	cout << "Enter your operator: "; cin >> operat;
//	cout << "Enter your apponent's operator: "; cin >> operat2;
//	cout << "Enter your call time: "; cin >> time;
//	if (operat == operat2)
//	{
//		cout << "your call is free...";
//	}
//
//	else if (operat2 == "nar")
//	{
//		cout << "Your call price is: ", time * nar_counter;
//	}
//	else if (operat2 == "bakcell")
//	{
//		cout << "Your call price is: ", time * bakcell_counter;
//	}
//	else if (operat2 == "azercell")
//	{
//		cout << "Your call price is: ", time* azercell_counter;
//	}
//}

//task3
int main()
{
	int salary{};
	int fine{};
	int result_count{};
	int fine_money{};
	cout << "Enter desired salary: "; cin >> salary;
	cout << "Enter fine count: "; cin >> fine;
	fine_money = (fine / 3) * 20;
	result_count = (salary + fine_money) * 2;
	cout << result_count;

	return 0;
}