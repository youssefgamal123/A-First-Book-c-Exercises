#include <iostream>
using namespace std;

int main(){
	int i, j, val[3][4] = { 8, 16, 9, 52, 3, 15, 27, 6, 14, 25, 2, 10 };
	int total = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
		cout << val[i][j] << " " << endl;
		total = total + val[i][j];

	}
}
	cout << "The total is " << total << endl;
		system("PAUSE");
		return 0;
	}

/*
b. Modify the program written for Exercise 3a to display the total of each row separately.

#include <iostream>
using namespace std;

int main(){
	int i, j, val[3][4] = { 8, 16, 9, 52, 3, 15, 27, 6, 14, 25, 2, 10 };
	int total = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			total = total + val[i][j];
		cout << val[i][j] << " " <<"The new total is  " << total << endl;


	}

}


		return 0;
	}*/
