//class
#include "orderedPair.h"
#include <stdexcept>

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

	void orderedPair::operator ++()
	{
		xval++;
		yval++;
	}

	/*
	orderedPair orderedPair::operator -(const orderedPair& first, const orderedPair& second)
	{
		orderedPair temp;
		temp.xval = first.xval - second.xval;
		return temp;

	}
	*/


	//Friends

	// friends have access to private members of the class.
	// You can use getters (public) or the private members.

	orderedPair operator * (const orderedPair& first, const orderedPair& second)
	{
		orderedPair temp;
		temp.setx(first.xval * second.getx() );
		temp.sety(first.gety() * second.yval);
		return temp;
	}

	orderedPair operator / (const orderedPair& first, const orderedPair& second)
	{

		if ((second.xval == 0) || (second.yval == 0))
		{
			throw "Division by zero condition!";
		}
		else
		{
			orderedPair temp;
			temp.xval = first.xval / second.xval;
			temp.yval = first.yval / second.yval;
			return temp;
		}

	};

	// using private members of the class.
	istream& operator>>(istream& input, orderedPair& pair)
	{
		input >> pair.xval;
		input.ignore();
		input >> pair.yval;
		return input;
	}