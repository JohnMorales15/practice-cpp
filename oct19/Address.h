#include <iostream>
#include <string>

class Address
{
    public:
        // Address();
        Address(std::string street, std::string city, std::string state);
        ~Address();

        std::string getStreet() const;
        std::string getCity() const;
        std::string getState() const;

        std::string setStreet();
        std::string setCity();
        std::string setState();
        print();

    private:
        std::string street;
        std::string city;
        std::string state;

}