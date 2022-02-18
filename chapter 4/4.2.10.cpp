#include <iostream>
using namespace std;
int main() {
double hours,total;
cout << "Enter hours worked" << endl;
cin >> hours;
if (hours > 40){
total=(12 * 40) + 480 * (18 *( hours - 40));
cout <<" Your earned this much  "<< total <<endl;
}
else if(hours <= 40) {
total = (12 * hours);
cout << "You earned this much " << total << endl;
}
return 0;
}
