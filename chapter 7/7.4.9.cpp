#include <algorithm>
#include <iostream>
using namespace std;

int main() {



	double grade[5][6] = { { 1, 100, 100, 100, 100 },
	{ 2, 100, 0, 100, 0 },
	{ 3, 82, 94, 73, 86 },
	{ 4, 64, 74, 84, 94 },
	{ 5, 94, 84, 74, 64 },
	};
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 6; j++){
			 grade[i][6] = (grade[i][1] * .2) + (grade[i][2] * .3) + (grade[i][2] * .3) + (grade[i][4] * .2);
			 grade[i][5] = (grade[i][1] + grade[i][2] + grade[i][3] + grade[i][4]) / 4;



		}
	}
	for (int i = 0; i < 5; i++){
		cout << "This is the regualar average for Student " << (i + 1) << endl;
		cout << grade[i][5] << endl;
	}
	for (int k = 0; k < 5; k++){
	cout << "This is the weighed final grade for Student " << (k+1)<< endl;
	cout << grade[k][6] << endl;
}

		system("PAUSE");
		return 0;
	}
/*
b. What modifications would you need to make to your program so that it can handle 60 students
rather than 5?

Increasing the range of the variable i would also increase the number of students that can be handled.
Ex. for(int i = 0; i < 60; i++)

c. Modify the program written for Exercise 9a by adding an eighth column to the array. The
grade in the eighth column should be calculated by computing the average of the top three
grades only.

#include <iostream>
using namespace std;

int main() {


	int total = 0,lowest=0;
	int grade[5][7] = { { 1, 100, 100, 100, 100 },
	{ 2, 100, 0, 100, 0 },
	{ 3, 82, 94, 73, 86 },
	{ 4, 64, 74, 84, 94 },
	{ 5, 94, 84, 74, 64 },
	};
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 7; j++){
			 grade[i][6] = (grade[i][1] * .2) + (grade[i][2] * .3) + (grade[i][2] * .3) + (grade[i][4] * .2);
			 grade[i][5] = (grade[i][1] + grade[i][2] + grade[i][3] + grade[i][4]) / 4;



			 total = grade[i][1] + grade[i][2] + grade[i][3] + grade[i][4];
			 if (grade[i][7] <= grade[i][lowest])
				 lowest = j;
			 total -= grade[lowest][7];
			 grade[i][7] = (total / 3);


		}
	}



	for (int i = 0; i < 5; i++){
		cout << "This is the regualar average for Student " << (i + 1) << endl;
		cout << grade[i][5] << endl;
	}
	for (int k = 0; k < 5; k++){
	cout << "This is the weighed final grade for Student " << (k+1)<< endl;
	cout << grade[k][6] << endl;
}
	for (int m = 0; m < 5; m++){
		cout << "The best grades final grade solution of student " << (m + 1) << endl;
		cout << grade[m][7] << endl;
	}


		return 0;
	}
  */
