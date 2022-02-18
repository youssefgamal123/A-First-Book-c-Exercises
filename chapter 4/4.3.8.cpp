#include <iostream>
using namespace std;
int main(){
int x;
cin >> x;
if(x > 0 && x<90){
cout << "Quadrant I" << endl;}
else if( x > 90 && x < 180)
{cout << "Quadrant II" << endl;}
else if(x> 180 && x < 270){
cout << "Quadrant III" << endl;}
else if(x>270 && x< 360){
cout << "Quadrant IV" << endl;}
else if (x == 0  || x == 90 || x == 180 || x== 270){

cout << "Axis" << endl;


return 0;


}

}
