#include <iostream>
using namespace std;

//Task1
int main()
{
	int value[3]{ 3, 6, 9 };

	char** name = new char* [2] {};
	name[0] = new char[10] {"COCS"};
	name[1] = new char[10] {"LSD"};
	name[2] = new char[10] {"ANGELDUST"};

	//ASCII BUBBLE SORTING
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if ((int)name[i][0] < (int)name[j][0])
			{
				char* r1 = name[i];
				name[i] = name[j];
				name[j] = r1;
				int r2 = value[i];
				value[i] = value[j];
				value[j] = r2;
			}
		}
	}
	// MAXIMUM AND MINNIMUM
	int max = value[0], min = value[0], maxim_index{}, minim_index{};
	for (size_t i = 0; i < 3; i++)
	{
		if (value[i] > max)
		{
			max = value[i];
			maxim_index = i;
		}
		else if (value[i] < min)
		{
			min = value[i];
			minim_index = i;
		}
	}
	//COUT
	cout << "Min prices: " << name[minim_index] << endl << "Max prices: " << name[maxim_index] << endl;

	for (size_t i = 0; i < 3; i++)
	{
		cout << name[i] << ": " << value[i] << "$" << endl;;
	}

	return 0;
}