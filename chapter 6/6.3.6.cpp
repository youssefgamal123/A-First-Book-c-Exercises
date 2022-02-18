#include <iostream>
using namespace std;

void yearcalc(int d,int&year,int&months,int&days);

int main(){

int d,year,months,days;

cout <<"Enter Number oF Days : ";
cin>>d;

yearcalc(d,year,months,days);
cout <<"Year = "<<year<<endl;
cout <<"Months = "<<months<<endl;
cout <<"Days = "<<days<<endl; 





  return  0;
}

void yearcalc(int d,int&year,int&months,int&days){

year = d/365;
d%=365;
months = d/30;
d%=30;
days = d;


}
