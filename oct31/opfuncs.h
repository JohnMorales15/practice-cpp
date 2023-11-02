//opfuncs.h


#include <iostream>
using std::ostream;

#include "orderedPair.h"

#ifndef OPFUNCS_H
#define OPFUNCS_H

// not a friend of the class
ostream& operator<<(ostream& output, const orderedPair& op);







#endif