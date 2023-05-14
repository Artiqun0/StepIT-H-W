#include <iostream>
using namespace std;


char** buns = new char* [6] {
	new char[15] {"Angel Dust"},
		new char[15] {"Spice"},
		new char[15] {"Met-fet"},
		new char[15] {"Cacoin"},
		new char[15] {"Metadon"},
		new char[15] {"Codein"}
};
int Gcount[6]{ 76, 48, 99, 75, 43, 27 };
float prices[6]{ 7, 8, 9.99, 5, 14, 11.79 };

int ccount{}, choice{};
float balance, overallBalance{}, choice2{}, ccount2{};
bool choicekass = true;
bool paid = false;

int main()
{
	while (choicekass)
	{
		if (Gcount[0] == 0 && Gcount[1] == 0 && Gcount[2] == 0 && Gcount[3] == 0)
		{
			cout << "We have run out of buns((";
			break;
		}

		cout << "Continue: "; cin >> choice2;
		choice = choice2;
		if (choice == 0)
			break;

		choice = 0, balance = 0, ccount = 0;
		bool choiceBoll = true;
		bool paid{};

		cout << "Hello, what do you want to buy?" << endl;

		for (size_t i = 0; i < 6; i++)
		{
			if (Gcount[i] > 0)
				cout << i + 1 << " - " << buns[i] << '\t' << "Buns and Prices: " << Gcount[i] << " - " << prices[i] << '$' << endl;
		}

		cin >> choice2;
		choice = choice2;

		while (choice > 6 || choice == 0 || choice < 0)
		{
			cout << "This product does not exist, please re-enter: "; cin >> choice2;
			choice = choice2;
			cout << endl;
		}

		while (choiceBoll)
		{
			switch (choice)
			{
			case 1:
			{
				if (Gcount[0] == 0)
				{
					cout << "We have no <Angel Dust> left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice = choice2;
					continue;
				}
				cout << "Enter count product: " << endl; cin >> ccount2;
				ccount = ccount2;

				while (ccount > Gcount[0] || ccount < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				balance += prices[0] * ccount;
				Gcount[0] -= ccount;
				break;
			}
			case 2:
			{
				if (Gcount[1] == 0)
				{
					cout << "We have no <Spice> left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice = choice2;
					continue;
				}
				cout << "Enter count product: " << endl; cin >> ccount2;
				ccount = ccount2;

				while (ccount > Gcount[1] || ccount < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				balance += prices[1] * ccount;
				Gcount[1] -= ccount;
				break;
			}
			case 3:
			{
				if (Gcount[2] == 0)
				{
					cout << "We have no <Met> left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice = choice2;
					continue;
				}
				cout << "Enter count product: " << endl; cin >> ccount2;
				ccount = ccount2;

				while (ccount > Gcount[2] || ccount < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				balance += prices[2] * ccount;
				Gcount[2] -= ccount;
				break;
			}
			case 4:
			{
				if (Gcount[3] == 0)
				{
					cout << "We have no <Cacoin> left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice = choice2;
					continue;
				}
				cout << "Enter count product: " << endl; cin >> ccount2;
				ccount = ccount2;

				while (ccount > Gcount[3] || ccount < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				balance += prices[3] * ccount;
				Gcount[3] -= ccount;
				break;
			}
			case 5:
			{
				if (Gcount[4] == 0)
				{
					cout << "We have no <Metadon> left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice = choice2;
					continue;
				}
				cout << "Enter count product: " << endl; cin >> ccount2;
				ccount = ccount2;

				while (ccount > Gcount[4] || ccount < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				while (ccount > 3)
				{
					cout << "Discounted items can only buy 3 pieces, please re-enter:"; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				balance += prices[4] * ccount;
				Gcount[4] -= ccount;
				break;
			}
			case 6:
			{
				if (Gcount[5] == 0)
				{
					cout << "We have no <Codein> left(" << endl;
					cout << "Enter another choice: " << endl; cin >> choice2;
					choice = choice2;
					continue;
				}
				cout << "Enter count product: " << endl; cin >> ccount2;
				ccount = ccount2;

				while (ccount > Gcount[5] || ccount < 0)
				{
					cout << "We don't have that many items, please re-enter: "; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				while (ccount > 3)
				{
					cout << "Discounted items can only buy 3 pieces, please re-enter:"; cin >> ccount2;
					ccount = ccount2;
					cout << endl;
				}
				balance += prices[5] * ccount;
				Gcount[5] -= ccount;
				break;
			}
			}
			cout << "Anything else ?" << endl; cin >> choice2;
			choice = choice2;
			while (choice > 4 || choice < 0)
			{
				cout << "This product does not exist, please re-enter: "; cin >> choice2;
				choice = choice2;
				cout << endl;
			}
			if (choice == 0)
			{
				if (balance > 300)
				{
					cout << "Your purchase is more than 300 dollars, please choose a product as a gift)" << endl;

					for (size_t i = 0; i < 4; i++)
					{
						if (Gcount[i] > 0)
							cout << i + 1 << " - " << buns[i] << endl;
					}
				}
				choiceBoll = false;
				float discount{};
				cout << "If you have discounts, enter the discount: "; cin >> discount;
				while (discount > 100 || discount < 0)
				{
					cout << "There can't be such percent. Please re-enter discount: "; cin >> discount;
				}
				balance = balance - ((balance / 100) * discount);
				cout << "You must pay: " << balance << endl;
				overallBalance += balance;
				cout << "Successfully paid: "; cin >> paid;
				if (paid)
					cout << "\a";
				system("cls");
				continue;
			}
		}
	}
	cout << "Over All balance: " << overallBalance << "$";

	return 0;
}