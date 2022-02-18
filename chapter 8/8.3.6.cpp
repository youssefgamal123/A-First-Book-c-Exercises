#include <iostream>
using namespace std;
int main()
{
	double miles[] = { 240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4,192.3 };
	double gallons[] = { 10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4 };
	double mpg[10];
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){

			*(mpg +i)  = *(miles + i)/ *(gallons + i);


		}
	}
	for (int k = 0; k < 10; k++){
		cout << *(mpg+ k) << endl;
	}

	system("PAUSE");
	return 0;
}
	
