#include <iostream>
using namespace std;

int main(){

int fmax[10];
int i,max;
short indx;
for(i=0;i<10;i++)
cin>>fmax[i];


max = fmax[0];

for (i =1 ; i<10;i++){
if (fmax[i]>max){
  max = fmax[i];
  indx=i;
}


}

cout << "The Maximum value is  "<<max<<endl;
cout<< "This The Element Number  "<<indx+1<<" In Array "<<endl;



}
