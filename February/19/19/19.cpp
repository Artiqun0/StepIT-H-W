#include <iostream>
using namespace std;

int main()
{

	//Task 1 

		/*srand(time(0));
		int array[10]{}, random_number{}, max{}, min = 999;

		cout << "Array = {";

		for (size_t i = 0; i < 10; i++)
		{
			random_number = ((rand() - 100) - rand()) % 100 + 1;
			array[i] = {random_number};

			if (i < 9)
				cout << random_number << ", ";
			else
				cout << random_number << "}";
		}

		for (size_t i = 0; i < 10; i++)
		{
			if (max < array[i])
			{
				max = array[i];
			}

			if (min > array[i])
			{
				min = array[i];
			}
		}

		cout << "\nMinimum = " << min << endl;
		cout << "Maximum = " << max << endl;*/

		//Task 2 

			/*srand(time(0));

			int array[10]{}, random_number{}, num{}, start{}, end{}, range{}, temper{}, sum{};

			cout << "Enter start: "; cin >> start;
			cout << "Enter end: "; cin >> end;

			if (start > end)
			{
				temper = end;
				end = start;
				start = temper;
			}

			range = end - start + 1;

			cout << "Enter your number: "; cin >> num;

			cout << endl << "Array = {";

			for (size_t i = 0; i < 10; i++)
			{
				random_number = rand() % range + start;

				array[i] = random_number;

				if (i < 9)
					cout << random_number << ", ";
				else
					cout << random_number << "}";
			}

			for (size_t i = 0; i < 10; i++)
			{
				if (array[i] < num)
					sum += array[i];
			}

			cout << endl << "Summary = " << sum << endl;*/

			//Task 3 

				/*int arr1[12]{}, arr2[12]{}, start{}, end{}, tpm{}, num{}, max{}, min = 9999999999;

				cout << "Enter the ammount of money for every months ->" << endl;

				for (size_t i = 0; i < 12; i++)
				{
					cout << i + 1 << ": "; cin >> arr1[i];
				}

				cout << endl << "Enter start: "; cin >> start;
				cout << "Enter end: "; cin >> end;

				while (start < 1 || end > 12)
				{
					cout << endl << "Enter start: "; cin >> start;
					cout << "Enter end: "; cin >> end;
				}

				num = end - start + 1;

				if (start > end)
				{
					tpm = end;
					end = start;
					start = tpm;
				}

				cout << endl << "Array of month profit {";

				for (size_t i = 0; i < 12; i++)
				{

					if (i < 11)
					{
						cout << arr1[i] << ", ";
					}
					else
					{
						cout << arr1[i] << "}";
					}

				}

				cout << endl << "Searching diapozone: {";

				for (size_t i = start - 1, j{}; i < end; i++, j++)
				{
					arr2[j] = arr1[i];

					if (i < end - 1)
					{
						cout << arr2[j] << ", ";
					}
					else
					{
						cout << arr2[j] << "}";
					}

				}

				for (size_t i = 0; i < num; i++)
				{
					if (max < arr2[i])
					{
						max = arr2[i];
					}

					if (min > arr2[i])
					{
						min = arr2[i];
					}
				}

				for (size_t i = start - 1; i < end; i++)
				{
					if (arr1[i] == min)
					{
						cout << endl << endl  << "Minimum ammount of money in " << i + 1 << " month = " << min << " AZN" << endl;
					}
				}

				for (size_t i = start - 1; i < end; i++)
				{
					if (arr1[i] == max)
					{
						cout << "Maximum ammount of money in " << i + 1 << " month = " << max << " AZN" << endl;
					}
				}*/

				//Task 4 

					/*int numbers[]{ -3, 84, 6, 12, 73, -6, 14, -151, 42, -4 };
					int min = numbers[0], max = numbers[0], imin{}, imax{};
					int	multiplyMinMax = 1, multiplyEven = 1, sumNeg1{}, sumNeg2{};
					int	neg1{}, neg2{}, norm{};*/

					//1) 

						/*for (size_t i = 0; i < 10; i++)
						{
							if (numbers[i] < 0)
							{
								sumNeg1 += numbers[i];
							}
						}
						cout << sumNeg1 << endl;*/

						//2)

							/*for (size_t i = 0; i < 10; i++)
							{
								if (numbers[i] < min)
								{
									min = numbers[i];
									imin = i;
								}

								if (numbers[i] > max)
								{
									max = numbers[i];
									imax = i;
								}
							}

							if (imax < imin)
							{
								norm = imin;
								imin = imax;
								imax = norm;
							}

							for (size_t i = imin + 1; i < imax; i++)
							{
								multiplyMinMax *= numbers[i];
							}

							cout << multiplyMinMax << endl;*/

							//3)

								/*for (size_t i = 0; i < 10; i++)
								{
									if (i % 2 == 0)
									{
										multiplyEven *= numbers[i];
									}
								}

								cout << multiplyEven << endl;*/

								//4) 

									/*for (size_t i = 0; i < 10; i++)
									{
										if (numbers[i] < 0)
										{
											neg1 = i;
											break;
										}
									}

									for (size_t i = 9; i >= 0; i--)
									{
										if (numbers[i] < 0)
										{
											neg2 = i;
											break;
										}
									}

									for (size_t i = neg1; i < neg2; i++)
									{
										sumNeg2 += numbers[i];
									}
									cout << sumNeg2*/;

									return 0;

}