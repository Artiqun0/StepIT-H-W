#include <iostream>
using namespace std;

class Transport {
public:
    virtual double calculatePassengerTime(int passengers) = 0;
    virtual double calculateCargoTime(int cargo) = 0;

    virtual double calculatePassengerCost(int passengers) = 0;
    virtual double calculateCargoCost(int cargo) = 0;
};