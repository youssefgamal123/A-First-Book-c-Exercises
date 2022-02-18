#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
		 double MAX = 4;
		 double STARTVAL = .5;
		 double STEPSIZE = .5;
		 double hours,distance;
		 double speed = 55;
		cout << "HOURS    DISTANCE TRAVELED \n"
			<< "------ - -------------\n";
		hours = STARTVAL;
		// set output formats for floating-point numbers only
		cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed)
			<< setprecision(2);
		while (hours <= MAX )
		{

			distance = speed * hours;
			cout << setw(4) << hours
				<< setw(15) << distance
				<< endl;
			hours = hours + STEPSIZE;

		}


	return 0;
}
