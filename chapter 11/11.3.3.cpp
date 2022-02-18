#include <iostream>
#include <iomanip>
using namespace std;
// class declaration section
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date(int = 3, int = 16, int = 2012);   // constructor
	operator long();
	void showDate();      // method to display a Date


};
// class implementation section
Date::Date(int mm, int dd, int yy)
{
	month = mm;
	day = dd;
	year = yy;
}
void Date::showDate()
{
	cout << setfill('0')
		<< setw(2) << month << '/'
		<< setw(2) << day<< '/'
		<< setw(2) << year;
	return;
}

//conversion operator definition for converting a long int to a Date
Date::operator long ()
{
	long yymmdd;
	int mp, yp,t, julian;
	if (month <= 2){
		mp = 0;
		yp = year;
	}
	else{ mp = int(.04 * month + 2.3);
	yp = year;
	}
	t = int(yp / 4) - int(yp / 100) + int(yp / 400);

	julian = 365 * year + 31 * (month - 1) + day + t - mp;
	return(julian);

}


int main()
{
	Date Gregorian(1, 31, 2011), Gregorian2(3,16,2012);
		long Julian, Julian2;
		Julian = long(Gregorian);
		Julian2 = long(Gregorian2);
		cout << "The Gregorian date is" << endl;
		Gregorian.showDate();
		cout << endl;
		Gregorian2.showDate();
		cout << endl;
		cout << "This date, as a Julian integer, is " << Julian << " and " << Julian2 << endl;
	cout << endl;

	system("pause");
	return 0;
}
