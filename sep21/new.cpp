#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    unsigned int num;

    std::cout << "Input num: ";
    std::cin >> num;

    for(int i = num + 1 ; num > 0; --num)
    {
        std::cout << std::setfill('*') << std::setw(num);
        std::cout << '*' << std::endl;
    }


    return 0;
}