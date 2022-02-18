#include <iostream>
using namespace std;

class Rectangle{

protected:
  double length,width;

public:
  Rectangle();// constructor
  double area(); // calculate the area

};

// class implementation section

Rectangle::Rectangle(){

length = 0.0;
width = 0.0;
}

double Rectangle::area(){
  return length*width;
}

class box : public Rectangle{

protected:
  double depth;


public:
  box(double , double , double );
  double volume();
  double area();


};

double box::area(){
  double surf_area = (2*length*width) +(2 *length * depth) + (2*width * depth);
	return surf_area; // note the base function call
}



box::box (double l , double w, double d  ){
  length = l;
  width = w;
  depth = d;
}

double box::volume(){
  double volume = length * width  * depth;
  	return volume;
}

int main(){

box b(2.25,23.4,5);
cout <<"box area = "<<b.area()<<endl;
cout<<"Box voulme = "<<b.volume()<<endl;


  return 0 ;
}
