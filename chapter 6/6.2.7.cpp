#include <iostream>
using namespace std;

double totamt(double quarters,double dimes , double nickles,double pennies );

int main(){

double num1,num2,num3,num4;

cout << "Enter First Number : "<<endl;
cin>>num1;
cout <<"Enter Second Number : "<<endl;
cin >> num2;
cout <<"Enter Third Number : "<<endl;
cin >>num3;
cout <<"Enter Fourth Number : "<<endl;
cin>>num4;

cout <<totamt(num1,num2,num3,num4);



  return 0 ;
}






double totamt(double quarters, double dimes, double nickels, double pennies)
{
	double value = (quarters * .25) + (dimes * .10) + (nickels * .05) + (pennies * .01);

	return value;
}
