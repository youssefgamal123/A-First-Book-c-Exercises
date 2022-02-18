#include <iostream>
#include <cmath>
using namespace std;

const double PI=2.0*asin(1.0);

class Circle
{
protected:
	double radius;
public:
	Circle(double = 1.0);  // constructor
	double calcval();
};
// class implementation section for Circle
Circle::Circle(double r)  // constructor
{
	radius = r;
}
// calculate the area of a Circle
double Circle::calcval()
{
	return(PI * radius * radius);
}
// class declaration section where Cylinder is derived from Circle
class Cylinder : public Circle
{
protected:
	double length;  // add one data member and
public:           // two member functions
	Cylinder(double r = 1.0, double l = 1.0) : Circle(r), length(l) {}
	double calcval();
};
// class implementation section for Cylinder
double Cylinder::calcval()   // calculates a volume
{
	return (length * Circle::calcval()); // note the base function call
}
class Sphere : public Circle
{
public:
	Sphere(double r = 1.0) : Circle(r){}
	double calcval();
};
double Sphere::calcval(){
	return ((4 / 3) * PI * pow(radius, 3));
}

 // class implementation section for class sphere



int main(){
Cylinder c(22.1254,232.23);
Sphere a;
cout <<"voulme of sphere  = "<<a.calcval()<<endl;



}
