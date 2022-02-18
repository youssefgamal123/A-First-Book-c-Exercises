#include <iostream>
using namespace std;

double findmax(double x , double y );

int main(){

  int fnum,snum;
  double max;

  cout << "Enter First Number  : "<<endl;
  cin >> fnum;
  cout << "Enter Second Number  : "<<endl;
  cin >> snum;

  max = findmax(fnum,snum);



  return 0;
}


double findmax(int x , int y ){

double max;
if (x>y)
max = x ;
else max = y;

return max;


}
