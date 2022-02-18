#include <iostream>
#include <iomanip>
using namespace std;

void makeMileskmTable(int st,int end,int inc);


int main(){

makeMileskmTable(1,5,1);




return 0 ;

}

void makeMileskmTable(int st,int end,int inc){

cout << "MILES\t\tKilometers"<<endl;
cout << "---------\t---------"<<endl;

for (int i = st;i<=end;i+=inc)
{
  		double kilo = i * 1.61;

cout<<setprecision(2)<< i<<"\t\t"<<kilo<<endl;




}








}
