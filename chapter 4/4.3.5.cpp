#include <iostream>
using namespace std;
int main(){
double numReynolds;
cin>> numReynolds;
if( numReynolds < 2000){
cout << "The flow is laminar" << endl;}
else if(numReynolds >= 2000 && numReynolds <= 3000){
cout << "The flow is transitional" << endl;}
else if (numReynolds > 3000){
cout << "The flow is turbulent" << endl;}




return 0;



}
