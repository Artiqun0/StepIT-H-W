#include "cpu.h"

cpu::cpu(string& _make, string& _model, uint16_t& _frequency, string& _socket)
{
	this->make = _make;
	this->model = _model;
	*this->frequency = _frequency;
	this->socket = _socket;
}

string cpu::getMake() const
{
	return this->make;
}

string cpu::getModel() const
{
	return this->model;
}

uint16_t cpu::getFrequency() const
{
	return *this->frequency;
}

string cpu::getSocket() const
{
	return this->socket;
}

void cpu::printDataCPU() const
{
	cout
		<< "CPU make: " << this->make << endl
		<< "CPU model: " << this->model << endl
		<< "CPU frequency: " << *this->frequency << endl
		<< "CPU socket: " << this->socket << endl;
}