#include <iostream>

int main()
{
    //#1
    int count = 1;

    while (count <= 10)
    {
        std::cout << count << ' ';
        count++;
    }
    std::cout << std::endl;

    //#2
    int num{0};

    for(int count{0}; count <= 100; count+=3)
    {

        std::cout << count << ' ';
        ++num;
        if (num == 10)
        {
            std::cout << std::endl;
            num = 0;
        }
    };



    // #3
    int count = 1;

    do
    {
        std::cout << count << ' ';
        count++;
    } while (count <= 10);

    std::cout << std::endl;


    //#4
    int nums;
    do
    {
        std::cout << "Enter a number (-1 to quit)" << std::endl;
        std::cin >> nums;
        std::cout << nums << ' '<< std::endl;

    } while (nums != -1);


    return 0;
}