//class
#include "orderedPair.h"

orderedPair::orderedPair()
{};

orderedPair::orderedPair(int x, int y): xval{x}, yval{y}
{};

orderedPair::orderedPair(orderedPair& pair)
{
    this->xval = pair.xval;
    this->yval = pair.yval;
}

void orderedPair::setx(int x)
{
    xval = x;
}

void orderedPair::sety(int y)
{
    yval = y;
}

int orderedPair::getx() const
{
    return xval;
}

int orderedPair::gety() const
{
    return yval;
}

void orderedPair::operator ++(xval, yval)
{
    xval++;
    yval++;
}

//Friends
orderedPair operator * (const orderedPair& first, const orderedPair& second)
{
    orderedPair temp;
    temp.setx(first.getx() * second.getx() );
    temp.sety(first.gety() * second.gety());
    return temp;
}

orderedPair operator - (const orderedPair& first, const orderedPair& second)
{
    orderedPair temp;
    temp.setx(first.getx() - second.getx());
    temp.sety(first.gety() - second.gety());
    return temp;
}