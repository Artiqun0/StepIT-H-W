#include <string>
#include <iostream>
using namespace std;

class graphicCard
{
private:
	string make{};
	string model{};
public:
	graphicCard(string& _make, string& _model);

	string getMake() const;
	string getModel() const;

	void pruitnDataGraphicCard() const;
};
