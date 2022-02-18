#include <cmath>
#include <iostream>
using namespace std;


const double PI=2.0*asin(1.0);

class Point {

  // private data members are written down as protected to make the dervied classes inherit the restriction of not accesing internal data memebers unless it's a friend or public class function
protected :
  double x1;
	double x2;
	double y1;
	double y2;

public:
  Point();
  double area();
  double distance();
};
Point::Point(){
  x1 = 0.0;
  y1 = 0.0;
  x2 = 0.0;
  y2 = 0.0;
};

double Point::distance(){
  double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return distance;
}

// dervied class declaration section


class circle :public Point {
protected:
  double radius;

public:
  circle(double r);
  double area(); // overwriting the function area

};

// class implementation section

circle ::circle(double r){
  radius = r ;
}

double circle::area(){
  double area = PI * pow(radius, 2);
	return area; // note the base function call
}


class Cylinder :public circle {
protected:
  double length;

public:
  double area();
  Cylinder(double r = 1.0, double l = 1.0) : circle(r), length(l) {}


};

double Cylinder ::area(){
  double surface_area = 2 * PI * radius *(radius + length);
	return surface_area;
}






int main(){

circle a(5);
cout <<"Area = "<<a.area()<<endl;
Cylinder c(2.254,3.41);

cout <<"Area of cylinder = "<<c.area()<<endl;



  return 0 ;
}
