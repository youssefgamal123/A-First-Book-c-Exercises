#include <iostream>
using namespace std;

void time(int ,int&hours,int&minutes,int&seconds);

int main(){

int n,hours,mins,secs;

cout <<"Enter Number : "<<endl;
cin>>n;

time(n,hours,mins,secs);

cout << "Hours = "<<hours<<endl;
cout <<"Minuts = "<<mins<<endl;
cout << "Seconds = "<<secs<<endl;







return 0 ;

}

void time(int n  ,int&hours,int&minutes,int&seconds){

    hours = n / 3600;
  	n %= 120;
  	minutes = n / 60;
  	minutes %= 60;
  	seconds = n;




}
