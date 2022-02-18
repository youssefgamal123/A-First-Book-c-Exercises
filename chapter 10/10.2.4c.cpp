#include <iostream>
using namespace std;


class circle {

 // declration part
private:
  int xcenter , ycenter ;
  double radius;


public :
circle(int = 5, int = 5, double = 3);
 void setCircle(int,int,double);
 void showCircle();

};

 // implenentation section

circle::circle(int x,int y , double z){
  xcenter = x;
  ycenter = y;
  radius =z;

}

void circle::setCircle(int x,int y , double z){
  xcenter = x;
  ycenter = y;
  radius =z;
}

void circle::showCircle(){
  cout << "Xcenter = "<<xcenter<<"   "<<"Ycenter = "<<ycenter<<"  " <<"Radius = "<<radius ;
}


int main(){

circle a;
a.setCircle(2,4,345.45)
a.showCircle();

  return 0 ;
}
