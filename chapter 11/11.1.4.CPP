#include <iostream>
using namespace std;

class Cartiesan{

private:
  double x ,y ;

public:
  Cartiesan(); // constructor
void show(); // function to display x,y values
void input(double xc, double yc);

};

Cartiesan::Cartiesan(){
x=0.0;
y=0.0;

}

void Cartiesan::show(){
  cout <<"Xcordinates = "<<x<<endl;
  cout <<"Ycordinates  = "<<y<<endl;
}

void Cartiesan::input(double xc, double yc){
x = xc;
y = yc;

}


int main(){

Cartiesan a,b;
a.input(111.2323,343.34343);
b =a;
a.show();
b.show();




  return 0 ;
}
