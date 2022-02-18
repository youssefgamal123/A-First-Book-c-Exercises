#include <iostream>
using namespace std;


int main(){
		   int arr[4][5] = { 16, 22, 99, 4, 18,
			                -258, 4, 101, 5, 98,
			                 105, 6, 15, 2, 45,
					             33, 88, 72, 16, 3 };


int max = arr[0][0],i,j;

for (i=0;i<4;i++){
  for (j=0;j<5;j++)
  {
    if (arr[i][j]>max)
    max = arr[i][j];

  }
}


cout <<"max = "<<max;

/*

. Modify the program written in Exercise 5a so that it also displays the maximum value’s row
and column subscript values.

#include <iostream>
using namespace std;


int main(){
		   double arr[4][5] = { 16, 22, 99, 4, 18,
			                  -258, 4, 101, 5, 98,
			                   105, 6, 15, 2, 45,
					     	   33, 88, 72, 16, 3 };
		   int a = 0; int b = 0;

		   for (int i = 0; i < 4; i++){
			   for (int j = 0; j < 4; j++){
				   if (arr[i][j] > arr[0][0]){
					   arr[0][0] = arr[i][j];
					   a = i;
					   b = j;
				   }
			   }
		   }

		   cout << arr[0][0] << setw(10) << a << setw(10)<< b << endl;
		system("PAUSE");
		return 0;
	}
  */



}
