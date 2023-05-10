#include <iostream>
using namespace std;
// task 1
//int main()
//{
//	int seconds{}, minutes{}, hours{};
//	cout << "Enter your seconds count...";
//	cin >> seconds;
//	minutes = seconds / 60;
//	hours = minutes / 60;
//	cout << "seconds: ", cout << seconds << endl;
//	cout << "minutes: ", cout << minutes << endl;
//	cout << " hours: ", cout << hours;
//
//	return 0;
//}

//int main()
//{	
//	float value{};
//	int dollars{}, cent{};
//	cout << "Enter your value... ";
//	cin >> value;
//	cent = int(value * 100) % 100;
//	dollars = value / 1;
//	cout << dollars, cout << "dollars" << endl;
//	cout << cent, cout << "cent" << endl;
//	return 0;
//}

int main()
{
	int days{}, left_days{}, weeks{};
	cout << "Enter days count: ";
	cin >> days;
	weeks = days / 7;
	cout << weeks, cout << " weks" << endl;
	left_days = days % 7;
	cout << left_days, cout << " days";
	return 0;
}