#include <iostream>
#include <iomanip>
using namespace std;

int main(){

const int STEPSIZE = 3;
const int MAX = 30;
const int START = 3;
double meters;
int feet = START;
cout << "Feet\t\t Meters\n";
cout << "----\t\t ------\n";

cout <<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<setprecision(2);

while(feet<=30){
meters  = (feet * .3048);

cout << setw(4) << feet
				<< setw(13)<<"  " << meters << endl;
feet +=STEPSIZE;

}



return 0;

}
