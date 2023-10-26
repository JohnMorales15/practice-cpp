#include "Address.h"
#include <iostream>
#include <string>
    using std::string;

Address::Address(std::string street, std::string city, std::string state):
    street{street}, city{city}, state{state}
{
    // intentionally left blank
}

Address::~Address()
{}

std::string Address::getStreet(){
    this->street = street;
}
std::string Address::getCity()
{
    this->city = city;
}
std::string Address::getState()
{
    this->state = state;
}

std::string Address::setStreet(aStreet)
{
    return this->street = aStreet;
}
std::string Address::setCity(aCity)
{
    return this->city = aCity;
}
std::string Address::setState(aState)
{
    return this->state = aState;
}