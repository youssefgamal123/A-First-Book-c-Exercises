#include <iostream>
#include <iomanip>
using namespace std;
class Date
{
private:

	int month;
	int day;
	int year;

public:

	Date(int = 7, int = 4, int = 2012);     // constructor
	Date operator-(long int); // prototype for the + operator function
	Date operator-(Date&);
	void showDate();     // member function to display a date
	void showDay();

};

// class implementation section

Date::Date(int mm, int dd, int yyyy)

{
	month = mm;
	day = dd;
	year = yyyy;
}

Date Date::operator-(long int days)
{
Date temp;  // a temporary date to store the result
temp.day = day - days;   // add the days
temp.month = month;
temp.year = year;

while (temp.day < 1)    // adjust the months
{
temp.month--;
temp.day += 30;
}

while (temp.month < 1)  // adjust the years
{
temp.year--;
temp.month += 12;
}

return temp;     // the values in temp are returned
}

Date Date::operator-(Date& date2)
{
	Date temp;  // a temporary date to store the result
	temp.day = day - date2.day ;   // add the days
	temp.month = month - date2.month;
	temp.year = year - date2.year;

	return temp;     // the values in temp are returned
}
void Date::showDate()

{

	cout << setfill('0')

		<< setw(2) << month << '/'
		<< setw(2) << day << '/'
		<< setw(2) << year % 100;

	return;

}

void Date::showDay()
{
	int ans;
	ans = day + (month * 30) + (year * 365);
	cout << ans << endl;
	return;
}

int main()

{
	Date oldDate(4, 1, 2011), newDate, coolDate(12,15,2010), finalDate; // declare two objects

	cout << "The initial date is ";
	oldDate.showDate();
	cout << endl;
	newDate = oldDate - 284;   // add in 284 days = 9 months and 14 days
	finalDate = oldDate - coolDate;
	cout << "The new date is ";
	newDate.showDate();
	cout << endl;
	cout << "The finalDate is ";
	finalDate.showDay();
	cout << endl;
	system("PAUSE");

	return 0;

}
