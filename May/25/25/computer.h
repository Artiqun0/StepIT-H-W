#include <iostream>
#include <string>
#include "system.h"
#include "monitor.h"
#include "mouse.h"
#include "keyboard.h"
using namespace std;

class computer 
{
private:
	string make{};
	string model{};
public:
	system* system{};
	monitor* monitor{};
	keyboard* keyboard{};
	mouse* mouse{};

	computer(string& make, string& model, system& system, monitor& monitor, keyboard& keyboard, mouse& mouse);

	const string getMake() const;
	const string getModel() const;

	void printDataComputer() const;

};

