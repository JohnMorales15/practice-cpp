#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int sum(int& a, float b)
{
    return a * b;
}

int square(int aValue = 1)
{
    return aValue * aValue;
}

int squareByRef(const int& aValue)
{
    return aValue * aValue;
}

int main()
{





    return 0;
}