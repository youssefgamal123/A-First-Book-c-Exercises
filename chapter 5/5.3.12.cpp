#include <iostream>
using namespace std;


int main()
{


int i;
double money;

cout <<"Enter Money : ";
cin>>money;

for (i=0;i<=10;i++){

money = money + .03 * money;
cout <<money<<endl;


}





return 0 ;

}
