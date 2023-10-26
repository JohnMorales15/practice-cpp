#include "new.h"
#include <string>
#include <iostream>


OrderedPair::OrderedPair(int x, int y):
    x{x}, y{y}
{
    // intentionally left blank
}

void add(OrderedPair(int x, int y))
{
    int sum = x + y;
}

void sub(OrderedPair(int x, int y))
{
    int sum = x - y;
}

int add(OrderedPair(int a,int b), OrderedPair(int x, int y))
{
    int new = add(OrderedPair(int a, int b),OrderedPair(int x, int y));

    return new;
}

int sub(OrderedPair(int a, int b), OrderedPair(int x, int y))
{
    int new = sub(OrderedPair(int a, int b), OrderedPair(int x, int y));

    return new;
}

int OrderedPair::multiply(int x, int y)
{
    int num = x * y;

    return num;
}

int OrderedPair::exp(int x, int y)
{
    int num = x * y;

    return num;
}

void OrderedPair::print() const
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}