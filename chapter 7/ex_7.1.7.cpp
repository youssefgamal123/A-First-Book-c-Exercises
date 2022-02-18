#include <iostream>
using namespace std;



int main(){

int numbers[8];
int i ,sum=0;


for (i= 0 ;i<8;i++)
cin>>numbers[i];

for (i=0;i<8;i++)
sum+=numbers[i];


double avg = (sum/8);

cout <<"Average = "<<avg<<endl;





}
