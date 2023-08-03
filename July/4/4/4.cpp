#include "Bus.h"



int main() {
    dataType::BinaryTree<BusDepo::dataBus> Buses{};

    bool exit{ true };

    while (exit)
    {
        uint16_t choice{};
        std::cout
            << "Enter your choice: " << std::endl
            << "1. Add bus" << std::endl
            << "2. Search bus" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::string name{}, surname{}, busNumber{};
            uint16_t* routeNumber = new uint16_t{};
            uint16_t* numberOfSeatsOnTheBus = new uint16_t{};

            std::cout << "Enter driver name: "; std::cin >> name;
            std::cout << "Enter driver surname: "; std::cin >> surname;
            std::cout << "Enter bus number: "; std::cin >> busNumber;
            std::cout << "Enter route number: "; std::cin >> *routeNumber;
            std::cout << "Enter number of seats on the bus: "; std::cin >> *numberOfSeatsOnTheBus;

            BusDepo::dataBus* newBus = new BusDepo::dataBus(name, surname, busNumber, *routeNumber, *numberOfSeatsOnTheBus);

            bool yes = Buses.tryAdd(*newBus);

            if (yes)
                BusDepo::saveInFile(*newBus);
            break;
        }
        case 2:
        {
            std::string busNumber{};
            std::cout << "Enter bus number: "; std::cin >> busNumber;

            std::cout << BusDepo::searchBus(busNumber, Buses);

            break;
        }
        }
    }


    return 0;
}