#include <iostream>
using namespace std;


int main(){

double Fahrenheit, Celsius;

cout << "Enter the temperature in degress Celsius:" << endl;

cin >> Celsius;

Fahrenheit = (9/5) * Celsius + 32.0;

cout << Fahrenheit << endl;

return 0;
}
