#include <iostream>
using namespace std;

class Complex{


private:
  double real, imag;
public:
  Complex(); // constructor
void display();
  void input(double r, double i );


};

Complex::Complex(){
  real = 0.0;
  imag =0.0;
}

void Complex::display(){
  cout <<"Real = "<<real<<endl;
  cout <<"Imag = "<<imag <<endl;
}

void Complex::input(double r, double i ){
  real = r;
  imag = i;
}

int main(){
Complex a;
a.input(1222.32,343544.34);
a.display();
Complex b;
b =a;
b.display();
}
