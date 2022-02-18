#include <iostream>
using namespace std;

void show(double* rates ,int size);
int main(){

double rates []  = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8,  10.0};
show (rates,9);




  return 0 ;
}


void show (double* rates , int size ){

int i ;

for (i=0;i<size;i++)
cout << *(rates+i)<<endl;


}
