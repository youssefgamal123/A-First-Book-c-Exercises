#include <iostream>
#include <cmath>
using namespace std;


void cylvol(int radius,int length);

int main(){

cylvol(3,5);



  return 0 ;
}




void cylvol(int radius , int length)
{

double volume = (3.14*pow(radius,2)*length);

cout << "volume = "<<volume;




}
