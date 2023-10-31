// work ordered pairs
//orderedPair.cpp
//requires opfuncs.h/.cpp
#include "orderedPair.h"
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <array>
    using std::array;

// ostream operator << (ostream output, );

int main()
{
    orderedPair temp(2, 4);

    cout << temp.getx() << temp.gety();

    // ++temp;

    cout << temp.getx() << temp.gety();

    return 0;
};
