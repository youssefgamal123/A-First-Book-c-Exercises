#include <iostream>
using namespace std;

int findmax(int x,int y,int&);

int main(){

int n1,n2,max;

cout<<"Enter First Number : ";
cin>>n1;
cout <<"Enter Second Number : ";
cin>>n2;
cout <<"Max = "<<findmax(n1,n2,max)<<endl;




}



int findmax(int x,int y,int&max){

int maxnum;

if (x>y)
  maxnum= x;
  else maxnum = y;


return maxnum;

}
