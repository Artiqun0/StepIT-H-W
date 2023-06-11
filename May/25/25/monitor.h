#include <iostream>
#include <string>
using namespace std;

class monitor
{
private: 
	string make{};
	string model{};
	uint16_t* resolution = new uint16_t[2]{};
public:
	monitor(string& make, string& model, uint16_t& resolution);

	const string getMake() const;
	const string getModel() const;
	const uint16_t getResolution() const;

	void printMonitorData() const;
};