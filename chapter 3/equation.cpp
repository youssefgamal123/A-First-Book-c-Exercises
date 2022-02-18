#include <math.h>
#include <iostream>
using namespace std;
int main(){
double a,b,c,x,value;
cout << "Enter the coefficient of the x-squared term:" <<endl;
cin >> x;
cout << "Enter the coefficient of the a-squared term:" <<endl;
cin>>a;
cout << "Enter the coefficient of the b-squared term:" <<endl;
cin >> b;
cout << "Enter the coefficient of the c-squared term:" <<endl;
cin >> b;
value = (a*pow(x,2)) + (b*x) + c;
cout << "The value of the second-order polynimical is:" << value << endl;
return 0;

}
