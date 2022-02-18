#include <iostream>
using namespace std;

void display(float n[],int size);
int main(){

float numbers[9]={6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};

display(numbers,9);



  return 0 ;
}
void display(float n[],int size){

int i;
for (i = 0 ;i<size;i++)
cout <<n[i]<< " ";

}
