#include <iostream>
using namespace std;

int main()
{


 	double slopes[] = { 17.24,25.63,5.94,33.92,3.71,32.84,35.93,18.24,6.92};
	double max = slopes[0];
	for (int i = 0; i < 8; i++){
		if (slopes[i] > max){
			max = slopes[i];

}

	}
	double min = slopes[0];
 	for (int i = 0; i < 8; i++){
		if (slopes[i] < min){
			min = slopes[i];
		}

	}
	cout << max << endl;
	cout << min << endl;

	

	return 0;
}
