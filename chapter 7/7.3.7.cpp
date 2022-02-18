
#include <iostream>
using namespace std;

void extend(double *price, double *quantity){
	const int NUM = 10;
	double amount[NUM];
	for (int i = 0; i < 10; i++){
		amount[i] = price[i] * quantity[i];
		cout << amount[i]<< endl;
	}
	return ;
}



int main(){
	const int NUM = 10;
	double price[] = { 10.62, 14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98 };
	double quantity[] = {4, 8.5,6,7.35,9,15.3,3,5.4,2.9,4.8};

	extend(price, quantity);


		system("PAUSE");
		return 0;
	}
