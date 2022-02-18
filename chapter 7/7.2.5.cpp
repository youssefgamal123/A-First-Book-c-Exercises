#include <iostream>
using namespace std;

int main()

{

	const int NUM = 20;
	int nums[] = { 9, -3, 20, 30, 40, 50, 60, 70, 80, 90, 100, -100, 0, 3, 2, 1, -10, -5, -1, 4 };
	int positive[NUM];
	int negative[NUM];
	for (int i = 0; i < 20; i++){

		if (nums[i] >= 0){
			positive[i] = nums[i];
			cout << "Positive values: " << positive[i] << endl;
		}
		else if (nums[i] < 0){
			negative[i] = nums[i];
			cout << "Negative values: " << negative[i] << endl;
		}


	}


	  system("PAUSE");

	return 0;
}
