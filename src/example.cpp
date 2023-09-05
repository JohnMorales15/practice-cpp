#include <iostream>


// <return type> <function name> ( variables comma separated )
int main()
{
    // declare variables
    // var1 is first variable entered by user
    int var1 = 0;

    // var1 is the second variable entered by user
    int var2{0};

    // Prompt user to enter variables

    std::cout << "Please enter a first integer: \n";
    std::cin >> var1;

    std::cout << "Please enter a second integer: \n";
    std::cin >> var2;

    std::cout << "The sum is: " << var1 + var2 << std::endl;
    std::cout << var1 << " + " << var2 << " = " << var1 + var2 << std::endl;

    if (var1 > var2)
    {
        std::cout << "var1 > var2" << std::endl;
        std::cout << var1 << " > " << var2 << std::endl;
    } else if (var2 > var1)
    {
        std::cout << "var2 > var1" << std::endl;
        std::cout << var2 << " > " << var1 << std::endl;
    } else
    {
        std::cout << "var1 = var2" << std::endl;
        std::cout << var1 << " = " << var2 << std::endl;
    }

    return 0;
}