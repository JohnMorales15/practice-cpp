#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    unsigned int num;

    std::cout << "Input num: ";
    std::cin >> num;

    /*for(int i = num + 1 ; num > 0; --num)
    {
        std::cout << std::setfill('*') << std::setw(num);
        std::cout << '*' << std::endl;
    }*/

    int starsRec(num);


    return 0;
}

void starsRec(int num)
{

    std::cout << num << std::endl;
    if (num == 0) // end close
    {
        std
        return ;
    }

    std::cout << std::setw(num) << std::setfill('*') << '*' << std::endl;
    starsRec(num - 1);
}