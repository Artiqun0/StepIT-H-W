#include "Bus.h"

BusDepo::dataBus::dataBus(std::string& _driverName, std::string& _driverSurname, std::string& _busNumber,
	uint16_t& _routeNumber, uint16_t& _numberOfSeatsOnTheBus)
{
	this->driverName = _driverName;
	this->driverSurname = _driverSurname;
	this->busNumber = _busNumber;
	this->routeNumber = new uint16_t(_routeNumber);
	this->numberOfSeatsOnTheBus = new uint16_t(_numberOfSeatsOnTheBus);
}

uint16_t BusDepo::dataBus::getNumberOfSeatsOnTheBus() const
{
	return *this->numberOfSeatsOnTheBus;
}

BusDepo::dataBus BusDepo::searchBus(std::string _busNumber, const dataType::BinaryTree<BusDepo::dataBus> _Buses)
{
	dataType::BinaryTree<BusDepo::dataBus>::Node current = _Buses.getRoot();
	while (true)
	{
		if (_busNumber > current.data.busNumber)
			current = *current.right;
		else if (_busNumber < current.data.busNumber)
			current = *current.left;
		else
			break;
	}

	return current.data;
}

void BusDepo::saveInFile(BusDepo::dataBus other)
{
	FILE* file{};
	fopen_s(&file, "buses.txt", "a+");

	if (file == nullptr)
	{
		std::cout << "Error" << std::endl;
		return;
	}

	fprintf(file, "%s", other.tostring());

	fclose(file);
}