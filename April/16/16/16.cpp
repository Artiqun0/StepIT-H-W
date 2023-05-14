#include <iostream>
using namespace std;

#pragma region ceaserFunc
char* caesar(char word[], int shift, int direction)
{
	for (size_t i = 0; i < 11; i++)
	{
		if (word[i] == '\0')
			break;
		if (direction == 1)
		{
			if ((int)word[i] > 64 && (int)word[i] < 91)
			{
				int r = (int)word[i] + shift;
				while (r > 90)
				{
					r = r - 90 + 64;
				}
				word[i] = (char)r;
			}
			else if ((int)word[i] > 96 && (int)word[i] < 123)
			{
				int r = (int)word[i] + shift;

				while (r > 122)
				{
					r = r - 122 + 96;
				}
				word[i] = (char)r;
			}
		}
		else if (direction == 2)
		{
			int r = (int)word[i] - shift;
			if ((int)word[i] > 64 && (int)word[i] < 91)
			{
				while (r < 65)
				{
					r = 64 - r;
					r = 90 - r;
				}
				word[i] = (char)r;
			}
			else if ((int)word[i] > 96 && (int)word[i] < 123)
			{
				int r = (int)word[i] - shift;

				while (r < 97)
				{
					r = 96 - r;
					r = 122 - r;
				}
				word[i] = (char)r;
			}
		}

		else
		{
			cout << "You can enter only 1 or 2...";

		}
	}


	return word;
}
#pragma endregion

int main()
{
#pragma region seaser
	char word[11]{};
	int shift{};
	int direction{};

	cout << "Enter word: "; cin.getline(word, 10);
	cout << "Enter shift: "; cin >> shift;
	cout
		<< "1: Right" << endl
		<< "2: Left" << endl
		<< "Choose direction:";
	cin >> direction;

	cout << caesar(word, shift, direction) << endl;
	cout << word;
#pragma endregion

#pragma region BubbleIsertion

	char** words = new char* [3];
	words[0] = new char[11] {};
	words[1] = new char[11] {};
	words[2] = new char[11] {};

	for (size_t i = 0; i < 3; i++)
	{
		cout << "Enter word " << i + 1 << ": ";
		cin.getline(words[i], 10);
	}

	//Bubble
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if ((int)words[i] < (int)words[j])
			{
				char* r = words[i];
				words[i] = words[j];
				words[j] = r;
			}
		}
	}

	//Insertion
	int i, key, j;
	for (i = 1; i < 3; i++)
	{
		key = (int)words[i][0];
		j = i - 1;

		while (j >= 0 && (int)words[j][0] > key)
		{
			words[j + 1] = words[j];
			j = j - 1;
		}
		words[j + 1] = words[i];
	}

	for (size_t i = 0; i < 3; i++)
	{
		cout << words[i];
	}
#pragma endregion


}