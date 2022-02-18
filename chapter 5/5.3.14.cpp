#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double total1 = 0,total2 = 0;
	double numyears = 10, expected = 10000000, profit = 1000000,loses,loses2;
	cout << "               SALES AND PROFIT PROJECTION" << endl;
	cout << "              -----------------------------" << endl;
	cout << "YEAR           EXPECTED SALES         PROJECTED PROFIT" << endl;
	cout << "--------         --------------------    ---------------------" << endl;

	for ( double years= 1; years <= numyears; years++){
		loses = years * expected * .04;
		loses2 = years * profit *.04;
			profit = profit - loses2;
			expected = expected - loses;
			total1 = total1 + expected ;
			total2 = total2 + profit;
		cout << years<<
		setw(30) << expected <<
	    setw(30) << profit << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	cout << "Totals:         $" << total1 << "              $" << total2 << endl;
	system("PAUSE");
	return 0;
}
