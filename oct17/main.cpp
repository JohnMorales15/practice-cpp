#include <iostream>

int main()
{
    int num = 123;
    int *numPtr = &num;
    int &numRef = num;

    std::cout << num << ' ' << numPtr << ' ' << &numRef << ' ' << *numPtr << std::endl;

    int *newPtr = new int;

    *newPtr = 22;

    int *newPtr1 = new int;

    newPtr1 = newPtr;

    *newPtr1 = 33;

    std::cout << numPtr << std::endl;
    std::cout << *numPtr << std::endl;
    std::cout << newPtr << std::endl;
    std::cout << *newPtr << std::endl;
    std::cout << &newPtr << std::endl;
    std::cout << &newPtr1 << std::endl;

    delete newPtr;




    return 0;
}