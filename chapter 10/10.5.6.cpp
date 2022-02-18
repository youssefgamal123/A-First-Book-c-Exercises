#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;
// class declaration section
class Coord
{
	// friends list
	friend double convPol(Coord&);

private:

	double xval;
	double yval;

public:

	Coord(double = 0, double = 0);  // constructor
	void display();
};

// class implementation section

Coord::Coord(double x, double y)
{
	xval = x;
	yval = y;
}

void Coord::display()
{
	char sign = ';';
	cout << xval << sign << (yval);
	return;
}

// friend implementations

double convPol(Coord &a)
{
	double r = a.xval,theta = a.yval;

	double x = r * cos(theta);
	double y = r * sin(theta);
	char sign = ',';
	cout << x << sign << y << endl;
	return 0;
}

int main()
{
	Coord a(3.2, 5.6), b(1.1, 8.4);
	double r, theta;
	cout << "\nThe first Coord number is ";
	a.display();
	cout << "\nThe second Coord number is ";
	b.display();

	cout << "\n\nCoordiate A values as radius and angle than convered back into Retangler Coordiates ";
	Coord c(convPol(a));

	cout << endl;
	system("PAUSE");

	return 0;
}
