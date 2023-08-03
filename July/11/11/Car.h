#pragma once
#include <iostream>


class Car
{
protected:
	std::string mark;
	std::string model;
	uint16_t* maxSpeed = new uint16_t{};
	uint16_t* numberOfSeats = new uint16_t{};
public:
	Car(std::string& _mark, std::string& _model, uint16_t& _maxSpeed, uint16_t& _numberOfSeats);

	virtual void drive() const = 0;
	virtual void park() const = 0;
	virtual void doWork() const = 0;

	std::string getMark() const;
	std::string getModel() const;
	uint16_t getMaxSpeed() const;
	uint16_t getnumberOfSeets() const;
};
