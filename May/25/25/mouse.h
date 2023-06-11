#include <iostream>
#include <string>
using namespace std;

class mouse
{
private:
	string make{};
	string model{};
	uint16_t* DPI = new uint16_t{};

public:
	mouse(string& _make, string& _model,  uint16_t& _DPI);

	string getMake() const;
	string getModel() const;
	uint16_t getDPI() const;

	void printDataMouse() const;
};
