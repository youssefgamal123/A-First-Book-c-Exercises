#include <iostream>
using namespace std;

double calcavg(int *testvals){
	int total = 0;
	int average;
	for (int i = 0; i < 14; i++){
		total = total + testvals[i];
	}
	 average = (total / 14);
	return average;
}
double variance(int *testvals, double a){
	int total = 0;
	for (int i = 0; i < 14; i++){
		total = total + ((testvals[i] - a)*(testvals[i] - a));
	}
	return (total/14);
}

int main(){

	int testvals[] = { 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73 };
	double a = calcavg(testvals);

	cout << "Your average is " << calcavg(testvals) << endl;
	cout << "Your Variance is " << variance(testvals, a)<< endl;

		system("PAUSE");
		return 0;
	}
