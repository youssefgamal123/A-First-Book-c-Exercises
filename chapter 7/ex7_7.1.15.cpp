#include <iostream>
using namespace std;

int main(){


double numbers[10];
int i , j ,temp;

for (i=0;i<10;i++)
cin>>numbers[i];



// sorting via selection sorting algorithm


for (i=0;i<10;i++){
  for (j=i+1;j<10;j++){

      if (numbers[i]>numbers[j]){
        temp = numbers[i];
        numbers[i]=numbers[j];
        numbers[j]=temp;


      }


  }
}

for (i=0;i<10;i++){
  cout <<numbers[i]<<endl;
}



return 0 ;

}

/// method is not effficent , because selection sorting is a slow algorithm in sorting , As if we wanted to sort an a large array with it, it will take very long time 
