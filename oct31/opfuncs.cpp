#include "opfuncs.h"

#include <iostream>
using std::ostream;


// since not a friend we have to use getters.
ostream& operator<<(ostream& output, const orderedPair& op)
{
	output << '(' << op.getx() << ", " << op.gety() << ')';
	return output;
};

