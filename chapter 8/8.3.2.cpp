#include <iostream>
using namespace std;

int main(){

float rates [] ={6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8,9.0};
float* dispPt = rates; // pointing to the first element in array
int i ;


for (i=0;i<13;i++)
{
cout <<*dispPt++<<endl;

}

/*
B:

#include <iostream>
#include <new>
using namespace std;
int main()
{

		const int VALUES = 13;
		double rates[VALUES] = { 6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, 9.0 };

		   // store address of nums[0] in nPt
		for (int i = 0; i < 13; i++){
			cout << *(rates + i) << endl;

		}
	system("PAUSE");
	return 0;
}
*/









  return 0 ;
}
