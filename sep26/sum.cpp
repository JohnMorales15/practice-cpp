
#include <iostream>
#include <string>
#include <cmath>

int sumEvenNums(int num); // prototype

int main()
{
    int aNum;

    std::cout << "Enter a positive number: ";
    std::cin >> aNum;

    if (aNum < 0)
    {
        std::cout << "Enter a positive number." << std::endl;
    }
    else
    {
        std::cout << "The sum of even numbers, provided by the given number: " << aNum << " is " << sumEvenNums(aNum) << std::endl;
    }

    return 0;
}

int sumEvenNums(int num)
{
    if (num <= 0)
    {
        return 0; // Base case to terminate recursion when num is non-positive.
    }
    else if (num % 2 == 0)
    {
        return num + sumEvenNums(num - 2);
    }
    else
    {
        return sumEvenNums(num - 1);
    }
}
