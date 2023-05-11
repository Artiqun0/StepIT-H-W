#include <iostream>
using namespace std;

//Task 1

//int main()
//{
//	int number{};
//	cout << "Enter number: "; cin >> number;
//
//	int *numbers = (int*)calloc(number, sizeof(int) * number);
//	int num = number;
//
//
//	for (size_t i = 0; i < number; i++)
//	{
//		numbers[i] = num;
//		num *= 2;
//	}
//
//	for (size_t i = 0; i < number; i++)
//	{
//		cout << numbers[i] << ' ';
//	}
//
//	return 0;
//}

//Task 2

//int main()
//{
//	int number{};
//	cout << "Enter number: "; cin >> number;
//
//	int *numbers = (int*)calloc(number, sizeof(int) * number);
//	int num = number;
//
//
//	for (size_t i = 0; i < number; i++)
//	{
//		numbers[i] = num;
//		num++;
//	}
//
//	for (size_t i = 0; i < number; i++)
//	{
//		cout << numbers[i] << ' ';
//	}
//
//	return 0;
//}

//Task 3
int main() {
    int numbers[2][6]{
        { 2, 7, 11, 0, 8, 5 },
        { 3, 8, 14, 0, 5, 7 }
    };
    int after[2][6]{};
    int movement{};
    int minus = 6;
    int choice{};

    for (size_t i = 0; i < 6; i++) {
        cout << numbers[0][i] << ' ';
    }
    cout << endl;
    for (size_t i = 0; i < 6; i++) {
        cout << numbers[1][i] << ' ';
    }
    cout
        << endl
        << "Enter direction: " << endl
        << "1: Right" << endl
        << "2: Left" << endl
        << "3: Left up" << endl
        << "4: Down" << endl;
    cin >> choice;
    cout << "Enter movement: " << endl; cin >> movement;

    if (movement > 6) {
        movement = movement % 6;
    }
    switch (choice) {
    case 1:
        for (size_t i = 0; i < 6; i++) {
            if (i + movement <= 5) {
                after[0][i + movement] = numbers[0][i];
                after[1][i + movement] = numbers[1][i];
            }
            else if (i + movement > 5) {
                after[0][i + movement - minus] = numbers[0][i];
                after[1][i + movement - minus] = numbers[1][i];
            }
        }
        break;
    case 2:
        for (size_t i = 0; i < 6; i++) {
            int b = i - movement;
            if (b < 0) {
                after[0][b + minus] = numbers[0][i];
                after[1][b + minus] = numbers[1][i];
            }
            else if (b >= 0) {
                after[0][b] = numbers[0][i];
                after[1][b] = numbers[1][i];
            }
        }
        break;
    case 3:
        for (int i = 0; i < 6; ++i) {
            after[0][i] = numbers[0][i];
            after[1][i] = numbers[1][i];
        }
        for (int i = 0; i < movement; ++i) {
            for (int j = 0; j < 6; ++j) {
                numbers[0][j] = after[0][j];
                after[0][j] = after[1][j];
                after[1][j] = numbers[0][j];
            }
        }
        break;
    case 4:
        for (int i = 0; i < 6; ++i) {
            after[0][i] = numbers[0][i];
            after[1][i] = numbers[1][i];
        }
        for (int i = 0; i < movement; ++i) {
            for (int j = 0; j < 6; ++j) {
                numbers[1][j] = after[0][j];
                after[0][j] = after[1][j];
                after[1][j] = numbers[1][j];
            }
        }
        break;
    }

    for (size_t i = 0; i < 6; i++) {
        cout << after[0][i] << ' ';
    }
    cout << endl;
    for (size_t i = 0; i < 6; i++) {
        cout << after[1][i] << ' ';
    }

    return 0;
}
