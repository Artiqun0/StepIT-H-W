#include "system.h"
#include <iostream>
using namespace std;


system :: system(string& _make, string& _model, motherBoard& _motherBoard,
	string& _storage)
{
	this->make = _make;
	this->model = _model;
	this->motherBoardd = new motherBoard(_motherBoard);
}

string system :: getMake() const
{
	return this->make;
}

string system :: getModel() const
{
	return this->model;
}

void system :: printDataSystemUnit() const
{
	cout
		<< "System unit make: " << this->make << endl
		<< "System unit model: " << this->model << endl;

	this->motherBoardd->printMotherBoardData();

}