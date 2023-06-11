#include "Monitor.h"

monitor::monitor(string& _make, string& _model, uint16_t& resolution)
{
	this->make = make;
	this->model = model;
	*this->resolution = resolution;
}

const string monitor::getMake() const
{
	return this->make;
}

const string monitor::getModel() const
{
	return this->model;
}

const uint16_t monitor::getResolution() const
{
	return *this->resolution;
}

void monitor::printMonitorData() const
{
	cout
		<< "Monitor make: " << this->make << endl
		<< "Monitor model: " << this->model << endl
		<< "Monitor resolution: " << *this->resolution << endl;
}