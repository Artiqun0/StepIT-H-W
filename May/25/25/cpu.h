#include <string>
#include <iostream>
using namespace std;

class cpu
{
private:
	string make{};
	string model{};
	uint16_t* frequency = new uint16_t{};
	string socket{};
public:
	cpu(string& _make, string& _model, uint16_t& _frequency, string& _socket);

	string getMake() const;
	string getModel() const;
	uint16_t getFrequency() const;
	string getSocket() const;

	void printDataCPU() const;
};
