#include <iostream>

int main()
{
    int count = 1;

    do
    {
        std::cout << count << ' ';
        count++;
    } while (count <= 10);

    std::cout << std::endl;

    int nums;
    do
    {
        std::cout << "Enter a number (-1 to quit)" << std::endl;
        std::cin >> nums;
        std::cout << nums << ' '<< std::endl;

    } while (nums != -1);


    return 0;
}