#include <iostream>
using namespace std;

int main(){

float prices[5]={9.92, 6.32, 12.63, 5.95, 10.29};
double units[5];
double amounts[5];

int i ;

for (i=0;i<5;i++)
cin>>units[i];


for (i=0;i<5;i++){

amounts[i]=units[i]*prices[i];

}

cout <<"Price"<<'\t'<<"Units"<<'\t'<<"Amount "<<endl;
cout <<"-----"<<'\t'<<"-----"<<'\t'<<"-------"<<endl;

for (i=0;i<5;i++)
cout <<prices[i]<<"\t"<<units[i]<<"\t"<<amounts[i]<<endl;




  return  0 ;
}
