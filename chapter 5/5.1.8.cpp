#include <iostream>
#include <iomanip>

using namespace std;
int main(){

int i ,num,fahrien ;
double celsius ;

cout <<"Enter Number Of conversions : ";
cin >> num;
cout <<"Enter Intial Value Of Fahrien : ";
cin >> fahrien;
system("cls");

cout << "Fahrien"<<"\t\t"<<"Celsius"<<endl;
cout << "--------\t-------\n";


for (i=1;i<=num;i++){

celsius=(5.0/9.0) * (fahrien - 32.0);
cout<<fahrien<<"\t\t"<<celsius<<endl;
fahrien+=4;


}










return 0 ;



}
