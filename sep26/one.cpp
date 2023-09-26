#include <iostream>

int factorial(int num); // prototype

int main()
{
    int aNumber;

    std::cout << "Enter a positive number: ";
    std::cin >> aNumber;

    std::cout << "The Factorial of " << aNumber << " = " << factorial(aNumber) << std::endl;

    return 0;
}

int factorial(int num)
{
    std::cout << num << std::endl;
    if(num > 1)
    {
        return num * factorial(num - 1);
    }
    else

        return 1;
}

