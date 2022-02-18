#include <iostream>
using namespace std;
int main(){
float time, interest;
cin >>time;
if(time > 5){
cout << .040 << endl;}
else if( time < 5 && time>= 4){
cout << .035 << endl;}
else if(time < 4 && time >=3){
cout << .030 << endl;}
else if(time <3 && time >=2){
cout << .025 << endl;}
else if(time <2 && time >= 1){
cout << .020 << endl;}
else if(time < 1){
cout << .015 << endl;}
return 0;
}
