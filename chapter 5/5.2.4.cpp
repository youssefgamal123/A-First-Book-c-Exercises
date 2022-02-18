#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
		const int MAXGALLONS = 20;
		const int STARTVAL = 10;
		const int STEPSIZE = 1;
		int gallons;
		double liters;
		cout << "GALLONS   LITERS\n"
			<< "------ - ----------\n";
		gallons = STARTVAL;

		// set output formats for floating-point numbers only
		cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed)
			<< setprecision(2);
		while (gallons<= MAXGALLONS)
		{
			liters = (gallons * 3.78541178);
			cout << setw(4) << gallons
				<< setw(13) << liters << endl;
			gallons = gallons + STEPSIZE;
		}

	system("PAUSE");
	return 0;

}
