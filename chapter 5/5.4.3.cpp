#include <iostream>
using namespace std;

int main(){

int number,rev;

cout <<"Enter Number : ";
cin >> number;


do {

rev = number%10 ; // get the last NUMBER
cout << rev;
number= number/10; // get the following number





} while(number!=0);










return 0 ;


}
