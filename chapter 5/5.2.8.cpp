#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
		 const int  MAX = 100;
		 const int  STARTVAL = 0;
		 const int  STEPSIZE = 1;
		 double Fahrenheit = 0;
		 double Celsius, realCelsius;
		cout << "REALCELSIUS      CELSIUS      \n"
			<< " ----------- - ------------- \n";
		Fahrenheit = STARTVAL;
		// set output formats for floating-point numbers only
		cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed)
			<< setprecision(2);

		while (Fahrenheit <= MAX &&  (Celsius - realCelsius) < 4 )
		{
			Celsius = (Fahrenheit - 30) / 2;
			realCelsius = ((Fahrenheit - 32) * (.55555555555));
			cout << setw(4) << realCelsius
				<< setw(15) << Celsius
				<< endl;
			Fahrenheit = Fahrenheit + STEPSIZE;
		}

	system("PAUSE");
	return 0;
	}
