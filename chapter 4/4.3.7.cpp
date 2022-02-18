#include <iostream>

using namespace std;

int main(){

float num1,num2;
int code ;

cout << "Enter Num1 : ";
cin >>num1;
cout << "Enter Num2 : ";
cin >> num2;
cout << "Enter Code : ";
cin >> code ;

if (code==1)
cout << (float)num1+num2;
else if (code == 2 )
cout << (float) num1*num2;
else if (code ==3 ){

if (num2==0 ){
  cout << "Can't Devide by Zero ";
}
else 
cout << (float)num1/num2;


}











  return 0 ;
}
