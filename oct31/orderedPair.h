#ifndef ORDEREDPAIR_H
#define ORDEREDPAIR_H
#include <iostream>
using std::istream;

class orderedPair
{
	friend orderedPair operator*(const orderedPair &first, const orderedPair &second);
	friend orderedPair operator/(const orderedPair &first, const orderedPair &second);
	friend istream &operator>>(istream &input, orderedPair &);

public:
	orderedPair();
	orderedPair(int, int);

	orderedPair(orderedPair &);

	void setx(int);

	void sety(int);

	int getx() const;
	int gety() const;

	void operator++();
	// orderedPair operator-(orderedPair&, orderedPair&);

private:
	int xval{0};
	int yval{0};
};
#endif