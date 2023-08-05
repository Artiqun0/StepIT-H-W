#pragma once
#include "Transport.h"

class Bicycle : public Transport {
public:
    double calculatePassengerTime(int passengers) override {
        return passengers * 0.5;
    }

    double calculateCargoTime(int cargo) override {
        return cargo * 0.2;
    }

    double calculatePassengerCost(int passengers) override {
        return passengers * 2.0;
    }

    double calculateCargoCost(int cargo) override {
        return cargo * 1.0;
    }
};