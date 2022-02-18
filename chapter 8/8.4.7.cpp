#include <iostream>
using namespace std;

void display(char* strng,int size);

int main(){

char messege[] = { " Vacation is near " };
char *strng = messege;

display(strng,19);


  return 0 ;
}

void display(char* strng ,int size){

int i ;
for (i=0;i<size;i++)
cout << *(strng+i)<<endl;


}
