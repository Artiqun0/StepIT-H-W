#include <iostream>
using namespace std;

struct boiler
{
	char* firm = new char[21] {};
	char* color = new char[21] {};
	int	power{};
	int volume{};
	int heatingTemperature{};

	void printInfo() {
		cout
			<< "Boiler firm: " << firm << endl
			<< "Boiler color: " << color << endl
			<< "Boiler power: " << power << endl
			<< "Boiler volume: " << volume << endl
			<< "Boiler Heating Temperature: " << heatingTemperature << endl;
	}
};

struct Boilers
{
	uint16_t capacity{};
	uint16_t count{};
	char* name = new char[21] {};
	boiler* boilers = new boiler[10]{};

	void createBoiler() {
		if (count < capacity) {

			boiler* a = new boiler{};

			getchar();

			cout << "Enter boiler firm: ";
			cin.getline(a->firm, 20);

			cout << "Enter boiler color: ";
			cin.getline(a->color, 20);

			cout << "Enter boiler power: ";
			cin >> a->power;

			cout << "Enter boiler volume: ";
			cin >> a->volume;

			cout << "Enter boiler Heating Temperature: ";
			cin >> a->heatingTemperature;

			boilers[count] = *a;
			count++;

		}
		else {
			cout << "Boilers is full" << endl;
		}
	}

	void printInfo() {
		cout
			<< "There are " << count << " boiler in " << name << endl;
	}

	void ShowAll() {
		for (int i = 0; i < count; i++) {
			cout << "Car #" << i + 1 << '\t';
			boilers[i].printInfo();
		}
	}
};

void createBoilers(Boilers*& b)
{
	b = new Boilers{};
	cout << "Enter name: "; cin.getline(b->name, 20);
	cout << "Enter capacity: "; cin >> b->capacity;
	b->boilers = new boiler[b->capacity];
}

int main()
{
	Boilers* boilers{};
	createBoilers(boilers);

	while (true) {
		int choice{};
		cout
			<< "Enter choice: " << endl
			<< "1. Add boiler" << endl
			<< "2. Show all boilers" << endl;

		cin >> choice;

		switch (choice) {
		case 1:
			system("cls");
			boilers->createBoiler();
			break;
		case 2:
			system("cls");
			boilers->ShowAll();
			break;
		default:
			break;
		}
	}
	return 0;
}