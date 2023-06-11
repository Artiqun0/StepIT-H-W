#include "keyboard.h"

keyboard::keyboard(string& make, string& model, string& connectionType)
{
	this->make = make;
	this->model = model;
	this->connectionType = connectionType;
}

const string keyboard::getMake() const
{
	return this->make;
}
const string keyboard::getModel() const
{
	return this->model;
}
const string keyboard::getConnectionType() const
{
	return this->connectionType;
}