#include <iostream>
#include <cmath>
using namespace std;

int main(){

int number;

cin >> number;

if (number > 0)
cout << sqrt(number);

else if (number!=0)
cout << 1/number;

else
cout << "Opreation could not be calculated ";






return 0 ;


}
