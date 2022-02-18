#include <iostream>
using namespace std;
int main()
{
	double money = 24,numyears = 10;

	for ( double years= 1626; years <= numyears; years+=50){
		money = 24 * money *(1 + .04)*50;
		cout << money<< '\n';
		cout << years << endl;

	}




	return 0;
}
