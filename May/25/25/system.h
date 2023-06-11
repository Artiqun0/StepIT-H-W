#include <iostream>
#include <string>
#include "motherBoard.h"
#include "storage.h"
using namespace std;

class system
{
private:
	string make;
	string model;
public:
	motherBoard* motherBoardd{};
	storage* storage{};

	system(string& _make, string& _model, motherBoard& _motherBoard, string& _storage);

	string getMake() const;
	string getModel() const;

	void printDataSystemUnit() const;
};
