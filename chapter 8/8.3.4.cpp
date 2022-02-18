#include <iostream>
using namespace std;


int main(){

int miles []={15, 22, 16, 18, 27, 23, 20};
int dist [7];
int* mPtr=miles;
int* dPtr=dist;
int i;

for (i=0;i<7;i++){

*dPtr++ = *mPtr++;

}
dPtr=dist;

for (i=0;i<7;i++)
cout <<*dPtr++<<endl;





}
