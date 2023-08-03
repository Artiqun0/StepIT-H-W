#include "BinaryTree.h"

namespace BusDepo
{
	class dataBus
	{
	public:
		std::string driverName{};
		std::string driverSurname{};
		std::string busNumber{};
		uint16_t* routeNumber{};

		dataBus() = default;

		dataBus(std::string& _driverName, std::string& _driverSurname, std::string& _busNumber,
			uint16_t& _routeNumber, uint16_t& _numberOfSeatsOnTheBus);

		uint16_t getNumberOfSeatsOnTheBus() const;

		char* tostring()
		{
			char* str = new char[300] {};
			char charDriverName[50]{};
			char charDriverSurname[50]{};
			char charBusNumber[50]{};
			driverName.copy(charDriverName, sizeof(charDriverName));
			driverSurname.copy(charDriverSurname, sizeof(charDriverSurname));
			busNumber.copy(charBusNumber, sizeof(charBusNumber));
			sprintf_s(str, 300, "%s\n%s\n%s\n%d\n%d\n", charDriverName, charDriverSurname, charBusNumber, *this->routeNumber, *this->numberOfSeatsOnTheBus);
			return str;
		}

		friend std::ostream& operator<< (std::ostream& os, const dataBus _Bus)
		{
			os
				<< _Bus.driverName << std::endl
				<< _Bus.driverSurname << std::endl
				<< _Bus.busNumber << std::endl
				<< *_Bus.routeNumber << std::endl
				<< *_Bus.numberOfSeatsOnTheBus << std::endl;

			return os;
		}

		bool operator>(const dataBus& other)
		{
			return this->busNumber > other.busNumber;
		}

		bool operator<(const dataBus& other)
		{
			return this->busNumber < other.busNumber;
		}
	private:
		uint16_t* numberOfSeatsOnTheBus{};
	};

	dataBus searchBus(std::string _busNumber, const dataType::BinaryTree<dataBus> _Buses);

	void saveInFile(const dataBus);
}