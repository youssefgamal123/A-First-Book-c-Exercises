#include <iostream>
#include <cmath>
using namespace std;


void spherevol(int r);

int main(){

spherevol(4);




  return 0;
}


void spherevol(int r){

double volume =(4*3.14*pow(r,3))/3;

cout << "Volume = "<<volume<<endl;



}
