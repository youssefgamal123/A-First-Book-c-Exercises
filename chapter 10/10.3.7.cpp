#include <iostream>
#include <cmath>
using namespace std;

class Coord
{

private:
  double xval,yval; /// private data members

public:
  Coord();
  void display();
  void convertToCartisean(double r, double theta);


};

// class implementation section

Coord::Coord(){
  xval= 0.0;
  yval = 0.0;
}



void Coord::convertToCartisean(double r, double theta){
  double xval = r * cos(theta);
	double yval = r * sin(theta);
	cout << xval << ',' << yval << endl;
}
void Coord::display(){
  	cout << xval << ',' << yval << endl;
}

int main(){

Coord a;

a.convertToCartisean(24,45);


  return 0;
}
