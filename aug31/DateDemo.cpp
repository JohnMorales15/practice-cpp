#include <string>
#include <iostream>
#include "Date.h"

int main()
{

    Date aDate = Date(2023, 8, 31);

    std::cout << aDate.getMonth() << std::endl;
    


    return 0;
}