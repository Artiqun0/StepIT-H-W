#pragma once
#include "Transport.h"

class Carriage : public Transport {
public:
    double calculatePassengerTime(int passengers) override {
        return passengers * 1.0;
    }

    double calculateCargoTime(int cargo) override {
        return cargo * 0.5;
    }

    double calculatePassengerCost(int passengers) override {
        return passengers * 5.0;
    }

    double calculateCargoCost(int cargo) override {
        return cargo * 2.0;
    }
};