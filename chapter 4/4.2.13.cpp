#include <iostream>
using namespace std;
int main(){
int month,day;
cout << "Enter a month (use a 1 for Jan, etc.):" << endl;
cin >> month;
cout << "Enter a day of the month:" << endl;
cin >> day;
if( month > 12 || month < 1){
cout << "invalid month has been entered" << endl;
}
else if( day < 1 || day > 31){
cout << "invalid day has been entered" << endl;}
return 0;
}
