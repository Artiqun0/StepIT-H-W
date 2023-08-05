#pragma once
#include "Transport.h"

class Car : public Transport {
public:
    double calculatePassengerTime(int passengers) override {
        return passengers * 0.2;
    }

    double calculateCargoTime(int cargo) override {
        return cargo * 0.1;
    }

    double calculatePassengerCost(int passengers) override {
        return passengers * 10.0;
    }

    double calculateCargoCost(int cargo) override {
        return cargo * 5.0;
    }
};