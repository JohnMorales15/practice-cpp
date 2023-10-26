#include <array>
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    using std::cout;
    using std::cin;
    using std::array;

    const unsigned int ROWS = 5;
    const unsigned int COLS = 7;

    int nums[35];
    for (int j = 1; j < 36; ++j)
    {
        int i = rand() % 101;
        nums[j]= i;
        cout << nums[j] << std::endl;
    }

    //cout << nums << " ";


    return 0;
}


// 2d matrix (5,7), fill random # [50,101], print matrix, sum each row and o/p, sum each col and o/p, sum the even # in the matrix.