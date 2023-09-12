#include <iostream>

int main()
{
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

    // std::cout << std::endl;

    return 0;

    
}