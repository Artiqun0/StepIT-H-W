#include "GraphicCard.h"

graphicCard::graphicCard(string& _make, string& _model)
{
	this->make = _make;
	this->model = _model;

}

string graphicCard::getMake() const
{
	return this->make;
}

string graphicCard::getModel() const
{
	return this->model;
}


void graphicCard::pruitnDataGraphicCard() const
{
	cout
		<< "Graphic Card make: " << this->make << endl
		<< "Graphic Card model: " << this->model << endl;
}