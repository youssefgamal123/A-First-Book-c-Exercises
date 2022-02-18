#include <iostream>
using namespace std;

void totalsec(int hours,int minutes,int seconds);


int main(){


totalsec(10,36,54);






  return 0 ;
}

void totalsec(int hours, int minutes, int seconds){

int total= (hours*60*60)+(minutes*60)+seconds;

cout << "Total seconds = "<<total<<endl;



}
