#include <iostream>
using namespace std;

void liquid(int n,int&gallons, int& quarts,  int& pints, int& cups);

int main(){

int n,gallons,quarts,pints,cups;

cout <<"Enter Number : ";
cin>>n;

liquid(n,gallons,quarts,pints,cups);

cout << "Gallons"<<gallons<<endl;
cout <<"Quarts "<<quarts<<endl;
cout <<"Pints = "<<pints<<endl;
cout <<"Cups = "<<n;





  return 0 ;
}

void liquid(int n,int&gallons, int& quarts,  int& pints, int& cups){

  gallons = n / 16;
  	n %= 16;
  	quarts=  n / 4;
  	n %= 4;
  	pints = n / 2;
  	n %= 2;
      cups = n;




}
