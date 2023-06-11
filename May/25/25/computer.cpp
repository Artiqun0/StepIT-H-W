#include "computer.h"

computer::computer(string& make, string& model, system& system, monitor& monitor, keyboard& keyboard, mouse& mouse)
{
	this->make = make;
	this->model = model;
	this->system = new createSystem(system);
	this->monitor = new createMonitor(monitor);
	this->keyboard = new createKeyboard(keyboard);
	this->mouse = new  createMouse(mouse);
}

const string computer::getMake() const
{
	return this->make;
}
const string computer::getModel() const
{
	return this->model;
}

void computer::printDataComputer() const
{
	cout << "Computer make: " << this->make << endl
		<< "Computer model: " << this->model << endl;
	this->system.printSystemData();
	this->monitor.printMonitorData();
	this->keyboard.printKeyboardData();
	this->mouse.printMouseData();
}