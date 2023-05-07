#include <iostream>
using namespace std;
// task 1
//int main()
//{
//    float r1{}, r2{}, r3{};
//    float r0{};
//    cout << "Enter data: ";
//    cin >> r1;
//    cin >> r2;
//    cin >> r3;
//    r0 = r1 * r2 * r3 / (r1 * r2 + r1 * r3 + r2 * r3);
//    cout << r0;
//
//
//    return 0;
//}

// task 2

//int main()
//{   
//    float leanth{}, radius{}, square{};
//    float pi = 3.14f;
//    cout << "Enter circle lenth: ";
//    cin >> leanth;
//    radius = leanth / (2 * pi);
//    square = pi * (radius * radius);
//    cout << square;
//
//
//    return  0;
//}

// task 3
int main()
{
	int s{}, v{}, t{}, acceleration{};
	cout << "Enter speed: ";
	cin >> v;
	cout << "Enter time: ";
	cin >> t;
	cout << "Enter acceleration: ";
	cin >> acceleration;
	s = v * t + (acceleration * t * t) / 2;
	cout << "Your distance is: ", cout << s;

	return 0;

}