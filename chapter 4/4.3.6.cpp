#include <iostream>
using namespace std;
int main(){
double tolerence;
cin >> tolerence;
if(tolerence < .01){
cout << "Space exploration "<<endl;}
else if(tolerence >= 0.1 && tolerence <= 1 ){
cout <<  "Military grade"<<endl;}
else if (tolerence >= 1 &&  tolerence <= 10){
cout << "Commercial grade" << endl;}
return 0;
}
