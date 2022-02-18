#include <iostream>
using namespace std;


int main(){

float grade=0.0;
double total;

do {
  cout << "Enter Grade : ";
  cin >> grade;

  if (grade==999){
    system("PAUSE");
    break;
  }

  else if (grade<0 || grade>100){
  cout <<"You Entered invalid grade ";
  system("PAUSE");
  break;
}

else
total+=grade;


} while(grade>0||grade<=100);


cout << "Total = "<< total <<endl;






  return 0 ;
}
