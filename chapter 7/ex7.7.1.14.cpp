#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
	const int NUMBERS = 1000;
	double randvalue;
	int i;

	srand(time(NULL));
	for (i = 1; i <= NUMBERS; ++i)
	{
		randvalue = (double(rand()) / RAND_MAX * 100);
		if (randvalue <= 50){
			cout << "This number is less or equal to 50 " << endl;
			cout << setw(20) << randvalue << endl;
		}
		else if (randvalue > 50){
			cout << "This number is greater than 50" << endl;
			cout << setw(20) << randvalue << endl; }
	}

	  system("PAUSE");

	return 0;
}
