#include <string>
#include <iostream>
using namespace std;

class storage
{
private:
	string make{};
	string model{};
	uint16_t* capacity = new uint16_t{};
public:
	storage(string& make, string& model, uint16_t& _capacity);

	string getMake() const;
	string getModel() const;
	uint16_t getCapacity() const;

	void printDataStorage() const;
};
