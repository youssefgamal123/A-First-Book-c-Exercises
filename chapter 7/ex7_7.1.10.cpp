#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{

	const int SIZE = 14;
	  float i, grade[SIZE],solution,standardDeviation = 0.0,deviation[SIZE];
	  int total = 0;

	  for (i = 0; i < 14; i++)
	  {
		  cout << "Enter your grade" << endl;
		  cin >> grade[SIZE];
		  total = total + grade[SIZE];

	  }
	  int average = total / 14;
	  cout << "Your total is" << endl;
	  cout << total << endl;
	  cout << "Your average is " << endl;
	  cout << average <<endl;

	  for (i = 0; i < 14; i++){
		  standardDeviation += pow(grade[SIZE] - average, 2);
		  solution = sqrt(standardDeviation / 14);
		  cout << "Standard Deviation = " << solution << endl;
		  solution = deviation[SIZE];

	  }

	  system("PAUSE");

	return 0;
}
