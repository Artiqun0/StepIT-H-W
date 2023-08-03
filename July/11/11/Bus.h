#include "Car.h"


class Bus : public Car
{
public:

	Bus(std::string& _mark, std::string& _model, uint16_t& _maxSpeed, uint16_t& _numberOfSeats)
		: Car(_mark, _model, _maxSpeed, _numberOfSeats) {};

	void drive() const override
	{
		std::cout << "car starts!" << std::endl;
		int choice{};
		std::cout
			<< "Where are we going?" << std::endl
			<< "1. Let's go home" << std::endl
			<< "2. Let's go to the nearest market" << std::endl
			<< "3. Let's go to the nearest hospital" << std::endl
			<< "4. Let's go to the nearest school" << std::endl
			<< "5. Enter adress: " << std::endl;
		if (choice == 5)
		{
			std::string adress{};
			std::cout << "Enter adress: "; std::cin >> adress;
		}


		std::cout << "Route completed, please buckle up!" << std::endl;
	}

	void park() const override
	{
		std::cout
			<< "Search for a parking place" << std::endl
			<< "Parking spot found" << std::endl
			<< "The car is parked" << std::endl
			<< "Parking complate!" << std::endl;
	}

	void doWork() const override
	{
		std::string job{};
		std::cout << "Enter job: "; std::cin >> job;

		std::cout << "Job: " << job << ' ' << "in progress." << std::endl;
		std::cout << "Jobb complated!" << std::endl;
	}
};