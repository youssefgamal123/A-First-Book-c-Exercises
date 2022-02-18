4. (Modify) a. Rewrite the program written for Exercise 2a, but include a friend function that
multiples an object’s radius by a static scaleFactor and then displays the actual radius value
and the scaled value.

Done!!

b. Test the program written for Exercise 4a.

#include "stdafx.h"
#include <iostream>
using namespace std;
// class declaration section
class Circle
{
	//friends list
friend double addscale(Circle&);
private:
	int xCenter;
	int yCenter;
	double radius;
	int scaleFactor = 2;
public:
	Circle(int = 5, int = 5, double = 3);      // constructor
	void display();         // accessor method
};
// class implementation section

Circle::Circle(int x, int y, double r)

{
	xCenter = x;
	yCenter = y;
	radius = r;
}

void Circle::display()

{
	//cout << xCenter * scaleFactor << " , " << yCenter * scaleFactor << endl;
	//cout << "The radius is " << radius * scaleFactor << endl;
}
//friend implementations
double addscale(Circle &a)
{
	cout << "The orginal radius is " << a.radius << endl;
	cout << "THe scale radius is " << (a.radius) * a.scaleFactor << endl;
	return 0;
}
int main()
{
	Circle a(5,2,10);

	Circle c(addscale(a));
	c.display();

	system("PAUSE");

	return 0;

}
