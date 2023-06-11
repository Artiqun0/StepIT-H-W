#include "Storage.h"


storage::storage(string& _make, string& _model, uint16_t& _capacity)
{
	this->make = _make;
	this->model = _model;
	*this->capacity = _capacity;
}

string storage::getMake() const
{
	return this->make;
}

string storage::getModel() const
{
	return this->model;
}

uint16_t storage::getCapacity() const
{
	return *this->capacity;
}

void storage::printDataStorage() const
{
	cout
		<< "Storage device make: " << this->make << endl
		<< "Storage device model: " << this->model << endl
		<< "Storage device capacity: " << *this->capacity << endl;
}