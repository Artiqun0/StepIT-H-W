#include "MotherBoard.h"

motherBoard::motherBoard(string& make, string& model, ram& RAM, cpu& CPU, graphicCard& _graphicCard)
{
	this->make = make;
	this->model = model;
	this->raM = new ram(RAM);
	this->cpU = new cpu(CPU);
	this->graphicCarD = new graphicCard(_graphicCard);
}

string motherBoard::getMake() const
{
	return this->make;
}

string motherBoard::getModel() const
{
	return this->model;
}

void motherBoard::printMotherBoardData() const
{
	cout
		<< "Mother Board make: " << this->make << endl
		<< "Mother Board mpdel: " << this->model << endl;

	this->raM->printRamData();
	this->cpU->printDataCPU();
	this->graphicCarD->pruitnDataGraphicCard();
}