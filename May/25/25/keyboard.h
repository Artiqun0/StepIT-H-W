#include <iostream>
#include <string>
using namespace std;

class keyboard
{
private:
	string make{};
	string model{};
	string connectionType{};
public:
	keyboard(string& make, string& model, string& connectoinType);

	const string getMake() const;
	const string getModel() const;
	const string getConnectionType() const;

	void printKeyboardData() const;
};
