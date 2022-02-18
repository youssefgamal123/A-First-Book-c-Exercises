#include <iostream>
using namespace std;

int main(){

float degree;
char unit;
cin >>degree>>unit;

if (unit=='f'){

cout << 5 * (degree - 32) / 9;


}
else if (unit=='c'){
  cout << (9.0/5.0) * degree + 32;
}
else {
  cout << "The Entered Data is incorrect \n";
  system("PAUSE");
}









  return 0 ;
}
