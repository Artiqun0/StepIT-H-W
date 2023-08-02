#include "Airplane.h"

airplane::airplane(string& _make, string& _model, string& _name, uint16_t& _volume, uint16_t& _lengthWithRamp, uint16_t& _floorLength,
	uint16_t& _floorWidth, uint16_t& _floorArea, uint16_t _heightBehindTheCenterSection, uint16_t& _heightUnderCenterSection, uint16_t& _passengerСapacity, uint16_t& _countPassengers)
{
	this->make = _make;
	this->model = _model;
	this->name = _name;
	*this->volume = _volume;
	*this->lengthWithRamp = _lengthWithRamp;
	*this->floorLength = _floorLength;
	*this->floorWidth = _floorWidth;
	*this->floorArea = _floorArea;
	*this->heightBehindTheCenterSection = _heightBehindTheCenterSection;
	*this->heightUnderCenterSection = -_heightUnderCenterSection;
	*this->passengerСapacity = _passengerСapacity;
	*this->countPassengers = _countPassengers;
}

string airplane::getMake() const
{
	return this->make;
}

string airplane::getModel() const
{
	return this->model;
}

uint16_t airplane::getVolume() const
{
	return *this->volume;
}

uint16_t airplane::getLengthWithRamp() const
{
	return *this->lengthWithRamp;
}

uint16_t airplane::getFloorLength() const
{
	return *this->floorLength;
}

uint16_t airplane::getFloorWidth() const
{
	return *this->floorWidth;
}

uint16_t airplane::getFloorArea() const
{
	return *this->floorArea;
}

uint16_t airplane::getHeightBehindTheCenterSection() const
{
	return *this->heightBehindTheCenterSection;
}

uint16_t airplane::getHeightUnderCenterSection() const
{
	return *this->heightUnderCenterSection;
}

uint16_t airplane::getPassengerСapacity() const
{
	return *this->passengerСapacity;
}