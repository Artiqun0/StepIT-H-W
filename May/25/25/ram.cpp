#include "ram.h"

ram :: ram(string& _make, string& _model, string& _formFactor, uint16_t& _clockFrequency,
	uint16_t& _throughput, uint16_t& _timings)
{
	this->make = _make;
	this->model = _model;
	this->formFactor = _formFactor;
	*this->clockFrequency = _clockFrequency;
	*this->throughput = _throughput;
	*this->timings = _timings;
}

string ram :: getMake() const
{
	return this->make;
}

string ram :: getModel() const
{
	return this->model;
}

string ram :: getFormFactor() const
{
	return this->formFactor;
}

uint16_t ram :: getClockFrequency() const
{
	return *this->clockFrequency;
}

uint16_t ram::getThroughput() const
{
	return *this->throughput;
}

uint16_t ram::getTimings() const
{
	return *this->timings;
}

void ram::printRamData() const
{
	cout
		<< "RAM make: " << this->make << endl
		<< "RAM model: " << this->model << endl
		<< "RAM form factor: " << this->formFactor << endl
		<< "RAM clock frequency: " << *this->clockFrequency << endl
		<< "RAM throughput: " << *this->throughput << endl
		<< "RAM timings: " << *this->timings << endl
}