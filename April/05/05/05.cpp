#include <iostream>
using namespace std;

void spacetoTab(char*& string)
{
    for (size_t i = 0; i < 52; i++)
    {
        if (string[i] == '\0')
            break;
        else if (string[i] == ' ')
        {
            string[i] = '\t';
        }
    }
    cout << string;
}

void count(char* string)
{
    int number{}, chAr{}, symbol{};

    for (size_t i = 0; i < 52; i++)
    {
        if (string[i] == '\0')
            break;

        if ((int)string[i] > 32 && (int)string[i] < 48 || (int)string[i] > 57 && (int)string[i] < 65 || (int)string[i] > 90 && (int)string[i] < 97 || (int)string[i] > 122 && (int)string[i] < 127)
        {
            symbol++;
        }
        else if ((int)string[i] > 47 && (int)string[i] < 58)
        {
            number++;
        }
        else if ((int)string[i] > 64 && (int)string[i] < 91 || (int)string[i] > 96 && (int)string[i] < 123)
        {
            chAr++;
        }
    }
    cout
        << "In line " << symbol << " symbols" << endl
        << "In line " << number << " numbers" << endl
        << "In line " << chAr << " letters" << endl;

}

void countWords(char* string)
{
    int words{};

    for (size_t i = 0; i < 52; i++)
    {
        if (string[i] == '\0')
        {
            words++;
            break;
        }

        if (string[i] == ' ' || string[i] == ',' || string[i] == ':')
            words++;
    }

    cout << "In line " << words << " words";
}

void pol(char* string)
{
    char* newString = new char[51] {};

    for (size_t i = 0, v = 0; i < 52; i++)
    {
        if (string[i] == '\0')
            break;

        if (string[i] != ' ' && string[i] != ',' && string[i] != '.' && string[i] != ':' && string[i] != ';' && string[i] != '?')
        {
            newString[v] = string[i];
            if (newString[v] > 64 && newString[v] < 91)
            {
                newString[v] = (char)((int)newString[v] + 32);
            }
            v++;
        }
    }

    int count{};
    while (newString[count] != '\0')
    {
        count++;
    }

    int a{};
    for (size_t i = 0, v = count - 1; i < count / 2; i++, v--)
    {
        if (string[i] == string[v])
            a++;
    }

    if (a == count / 2)
        cout << "yes";
    else
        cout << "no";

}

int main()
{
#pragma region Task1
    //char* string = new char[51] {};

    //cout << "Enter line: "; cin.getline(string, 50);

    //spacetoTab(string);
#pragma endregion

#pragma region Task2
 /*   char* string = new char[51];

    cout << "Enter line: "; cin.getline(string, 50);

    count(string);*/
#pragma endregion

#pragma region Task3
    //char* string = new char[51];

    //cout << "Enter line: "; cin.getline(string, 50);

    //countWords(string);
#pragma endregion

#pragma region Task4
    char* string = new char[51] {};

    cout << "Enter line: "; cin.getline(string, 50);

    pol(string);
#pragma endregion

    return 0;
}