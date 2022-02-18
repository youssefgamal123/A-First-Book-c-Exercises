#include <iostream>
using namespace std;

class Car{

private:
  double enginesize;
  char bodystyle;
  int colorcode;

public:
  Car(); // constructor
  void display();

};

Car::Car(){
  enginesize = 0.0;
  bodystyle='x';
  colorcode = 0;
}
void Car::display(){
  cout <<"Engine size : "<<enginesize<<endl;
  cout <<"BodyStyle: "<<bodystyle<<endl;
  cout <<"Color Code : "<<colorcode <<endl;
}

int main(){

Car c1,c2;
c1.display();
c2 = c1;
c2.display();


  return 0 ;
}
