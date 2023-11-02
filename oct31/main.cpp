// work ordered pairs
//orderedPair.cpp
//requires opfuncs.h/.cpp
#include "orderedPair.h"
#include "opfuncs.h"
#include <iostream>
	using std::cout;
	using std::cin;
	using std::endl;
	using std::ostream;

#include <array>
	using std::array;

	int main()
	{
		orderedPair temp(3, 5);
		cout << "Using a regular cout statement\n";
		cout << '(' << temp.getx() << ", " << temp.gety() << ')' << endl;

		cout << "Using overloaded << operator\n";
		cout << temp << endl;

		orderedPair first(4, 8);
		orderedPair second(4, 3);

		cout << first << " * " << second << " = " << first * second << endl;

		orderedPair third;
		cout << "Enter your ordered pair as x y :";
		cin >> third;
		cout << endl;
		cout << "third = " << third << endl;

		try
		{
			temp = first / third;
		}
		catch (const char* err)
		{
			cout << "Exception occurred" << endl << err << endl;;
			//exit;
		}
		cout << "temp = first / third = \n" << temp << " = " << first << " / " << third << endl;

	};

