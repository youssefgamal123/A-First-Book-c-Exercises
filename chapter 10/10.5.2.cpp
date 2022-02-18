#include <iostream>
using namespace std;

class Circle{

private:
  int xcenter;
  int ycenter;
  double radius;
  static int scaleFactor; // static scalefactor variable

public:
display(); // display method
Circle(int x,int y , double r, int s); // constructor

};
int Circle::scaleFactor=0; //declration for scaleFactor variable

Circle::Circle(int x,int y , double r, int s){
  xcenter = x;
  ycenter = y;
  radius = r;
  scaleFactor = s;
display();
}

 Circle::display(){
  cout <<"Xcenter = "<<xcenter <<" Ycenter = "<<ycenter  << " radius = "<<radius <<"  ScaleFactor = "<< scaleFactor<<endl;
}
int main(){

    Circle a(1,1,12.5,15);


  return 0;
}
