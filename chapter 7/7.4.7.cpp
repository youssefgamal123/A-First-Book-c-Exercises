#include <iostream>
using namespace std;

int main() {
	const int SIZE = 15;
	int arr[3][5];
	int *arr2 = (int*)arr;
	int count = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
int i,j,k;
	for( j =0;  j=15; j++){
	for( k =0; int k = 15; j++){
	cin >> arr[j][k];
	}
	}
	for ( i = 0; i < 15; i++){
		if (arr2[i] < 60){
			count++;
		}
		else if (arr2[i] >= 60 && arr2[i] <= 70){
			count2++;
		}
		else if (arr2[i] >= 70 && arr2[i] <= 80){
			count3++;
		}
		else if (arr2[i] >= 80 && arr2[i] <= 90){
			count4++;
		}
		else if (arr2[i] >= 90){
			count5++;
		}
	}	cout << "Less than 60 " << count << endl;
	cout << "Greater than or equal to 60 and less than 70 " << count2 << endl;
	cout << "Greater than or equal to 70 and less than 80 " << count3 << endl;
	cout << "Greater than or equal to 80 and less than 90 " << count4 << endl;
	cout << "Greater than or equal to 90 " << count5 << endl;

		return 0;
	}
