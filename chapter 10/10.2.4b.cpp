#include <iostream>
using namespace std;




class complex {

private:
  double real , imaginary;


public :
complex(double = 5, double = 15); // constructor method prototype
void setComplex(double,double);
void showComplex();


};

complex::complex (double r , double i ){
  real = r;
  imaginary = i;
} // constructor method implementation

void complex::setComplex (double r,double i ){
  real = r;
  imaginary = i;
}
void complex::showComplex (){
  cout << real <<endl;
  cout << imaginary;
}






int main(){
complex a;
a.setComplex(22.2645,55.12564);
a.showComplex();


}
