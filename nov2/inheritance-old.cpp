#include <iostream>
using std::cout;

// base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheels : public Vehicle {
public:
    fourWheels()
    {
        cout << "Objects with 4 wheels are vehicles\n";
    }
};

// sub class derived from the derived base class fourWheeler
class Car : public fourWheels {
public:
    Car() { cout << "Car has 4 Wheels\n"; }
};

// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base classes.
    Car Ferrari;
    return 0;
}