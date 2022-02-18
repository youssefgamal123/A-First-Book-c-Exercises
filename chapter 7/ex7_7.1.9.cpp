#include <iostream>
using namespace std;

const int s=5;
int main(){

int numbers[s];
int i ;

for (i=0;i<5;i++)
cin>>numbers[i];



for(i=s-1;i>=0;i--){
  cout<<numbers[i]<<endl;
}




  return 0;
}
