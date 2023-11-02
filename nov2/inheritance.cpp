#include <iostream>
#include <cstdlib>

class Vehicle
{
public:
	int NumberOfWheels;
	void Drive()
	{
		std::cout << "in class Vehicle\n";
		std::cout << "Driving, driving, driving ...." << std::endl;
	}
};

class Jeep : public Vehicle
{
public:
	void MeAndMyJeep()
	{
		std::cout << "in class Jeep\n";
		std::cout << "Just me and my Jeep!" << std::endl;
	}
};

int main()
{
	Jeep Cherokee;  // instantiate object
	Cherokee.MeAndMyJeep();  // function from class Jeep
	Cherokee.Drive();		 // function from vehicle

	return 0;
};