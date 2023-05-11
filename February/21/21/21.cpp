#include <iostream>
using namespace std;

int main()
{
    //Task1

    /*int arr[10]{ 34, 2, 56, -98, -5, 1, -14, 6, 9, -30 };
        int arr1[5]{}, arr2[5]{};

        for (int i = 0; i < 5; i++)
        {
          arr1[i] = arr[i];
        }

        for (int i = 0, j = 5; i < 5, j < 10; i++, j++)
        {
          arr2[i] = arr[j];
        }

        cout << "First array { ";
        for (size_t i = 0; i < 5; i++)
        {
            if (i < 4)
            {
                cout << arr1[i] << ", ";
            }
            else
            {
                cout << arr1[i] << " }" << endl;
            }
        }

        cout << "Second array { ";
        for (size_t i = 0; i < 5; i++)
        {
            if (i < 4)
            {
                cout << arr2[i] << ", ";
            }
            else
            {
                cout << arr2[i] << " }" << endl;
            }
        }*/

        //Task2

        /*int arr1[5]{ 34, 2, 56, -98, -5 };
                    int arr2[5]{ 1, -14, 6, 9, -30 };
                    int arr3[5]{};

                    for (int i = 0; i < 5; i++)
                    {
                        arr3[i] = arr1[i] + arr2[i];
                    }

                    cout << "Array { ";
                    for (int i = 0; i < 5; i++)
                    {
                        if(i < 4)
                        {
                            cout << arr3[i] << ", ";
                        }
                        else
                        {
                            cout << arr3[i] << " }";
                        }
                    }*/

                    //Task3

                    /*int arr[7] = {}, num{}, count{};
                    char arrDays[7][30]{ "Monday", "Tuesday", "Wendsday", "Thursday", "Friday", "Saturday", "Sunday" };

                    for (int i = 0; i < 7; i++)
                    {
                        cout << " Enter the expense amount for " << arrDays[i] << " = "; cin >> arr[i];

                        num = num + arr[i];
                    }

                    cout << endl << "The total amount of expenses for the week is equal to = " << num << " USD" << endl << endl;

                    num = num / 7;
                    cout << "The average amount of expenses per week is equal to = " << num << " USD" << endl << endl;

                    for (int i = 0; i < 7; i++)
                    {
                        if (arr[i] > 100)
                        {
                            cout << "In " << arrDays[i] << " consumption exceeded 100$." << endl;
                            count++;
                        }
                    }

                    cout << endl << "During the week, the expense exceeded 100$ " << count << " time(s)." << endl;*/

                    //Task4

    float currency[12]{ 1.07, 1.05, 1.08, 1.06, 1.07, 1.11, 1.07, 1.05, 1.08, 1.06, 1.07, 1.11 };
    float percentage{}, monthCapitalization{}, depositValue{};
    int month{};

    cout << "Enter month (1 - 12): "; cin >> month;
    cout << "Enter the deposit amount: "; cin >> depositValue;
    cout << "Enter the amount of the interest rate: "; cin >> percentage;

    monthCapitalization = (depositValue / 100) * (percentage / 12);
    monthCapitalization *= currency[month - 1];
    monthCapitalization *= month;

    if (monthCapitalization >= 500)
    {
        cout << endl << "You can cash out no more than " << (int)monthCapitalization / 2 << " USD" << endl;
    }
    else
    {
        cout << endl << "You can cash out " << (int)monthCapitalization << " USD" << endl;
    }

    return 0;

}