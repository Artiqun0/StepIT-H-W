#include "mouse.h"


mouse :: mouse(string& _make, string& _model, uint16_t& _DPI)
{
	this->make = _make;
	this->model = _model;
	*this->DPI = _DPI;
}

string mouse ::  getMake() const
{
	return this->make;
}

string mouse :: getModel() const
{
	return this->model;
}

uint16_t mouse :: getDPI() const
{
	return *this->DPI;
}

void mouse :: printDataMouse() const
{
	cout
		<< "Mouse make: " << this->make << endl
		<< "Mouse model: " << this->model << endl
		<< "Mouse DPI: " << *this->DPI << endl;
}