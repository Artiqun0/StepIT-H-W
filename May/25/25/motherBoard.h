#include "ram.h"
#include "cpu.h"
#include "graphicCard.h"
#include <string>
#include <iostream>
using namespace std;

class motherBoard
{
private:
	string make;
	string model;
public:
	ram* raM{};
	cpu* cpU{};
	graphicCard* graphicCarD{};

	motherBoard(string& make, string& model, ram& RAM, cpu& CPU, graphicCard& _graphicCard);

	string getMake() const;
	string getModel() const;

	void printMotherBoardData() const;
};
