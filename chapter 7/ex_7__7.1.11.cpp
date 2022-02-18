#include <iostream>
using namespace std;

int main(){
int i ;
int price [10];
int amount [10];
int total [10];

//reading the price array


for (i=0;i<10;i++){

cout <<"Enter Price :  ";
cin>>price[i];

}

cout<<"-----------------------------------------------"<<endl;


// reading the amount array


for (i=0;i<10;i++){

cout <<"Enter Amount :  ";
cin>>amount[i];

}

// calculating the total Array

for(i=0;i<10;i++)
total[i]=price[i]*amount[i];


cout <<"Total"<<"\t"<<"Price"<<"\t"<<"Amount"<<endl;
cout <<"----"<<"\t"<<"-----"<<"\t"<<"------"<<endl;

for (i = 0 ;i<10;i++){
  cout <<total[i]<<"\t"<<price[i]<<"\t"<<amount[i]<<endl;
}










  return 0 ;
}
