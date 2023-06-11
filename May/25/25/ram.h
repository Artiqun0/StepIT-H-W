#include <string>
#include <iostream>
using namespace std;

class ram
{
private:
	string make{};
	string model{};
	string formFactor{};
	uint16_t* clockFrequency = new uint16_t{};
	uint16_t* throughput = new uint16_t{};
	uint16_t* timings = new uint16_t{};
public:
	ram(string& _make, string& _model, string& _formFactor, uint16_t& _clockFrequency,
		uint16_t& _throughput, uint16_t& _timings);

	string getMake() const;
	string getModel() const;
	string getFormFactor() const;
	uint16_t getClockFrequency() const;
	uint16_t getThroughput() const;
	uint16_t getTimings() const;

	void printRamData() const;
};
