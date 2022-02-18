
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	const int SIZE = 20;
	int arr[4][5] = { 16, 22, 99, 4, 18,
		             -258, 4, 101, 5, 98,
		              105, 6, 15, 2, 45,
		              33, 88, 72, 16, 3 };
	int *sort = (int*)arr;
	int temp;

	std::sort(sort, sort + SIZE);


	for (int k = 0; k<20; k++) {
		cout << sort[k] <<endl;
		//printf("arr[%d] = %2d\n", k, sort[k]);
	}

		return 0;
	}
