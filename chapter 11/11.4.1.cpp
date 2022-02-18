//Same result as the operator[].
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
	Date(int = 7, int = 4, int = 2012);    // constructor
	Date operator()(int);   // function prototype
	void showDate();        // member function to display a Date
};
// class implementation section
Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}
Date Date::operator()(int days)
{
	Date temp;    // a temporary Date to store the result
	temp.day = day + days;    // add the days
	temp.month = month;
	temp.year = year;
	while (temp.day > 30)     // now adjust the months
	{
		temp.month++;
		temp.day -= 30;
	}
	while (temp.month > 12)   // adjust the years
	{
		temp.year++;
		temp.month -= 12;
	}
	return temp;    // the values in temp are returned
}
void Date::showDate()
{
	cout << setfill('0')
		<< setw(2) << month << '/'
		<< setw(2) << day << '/'
		<< setw(2) << year % 100;
	return;
}
int main()
{
	Date oldDate(7, 4, 2011), newDate; // declare two objects
	cout << "The initial Date is ";
	oldDate.showDate();
	newDate = oldDate(284); // add in 284 days = 9 months and 14 days
	cout << "\nThe new Date is ";
	newDate.showDate();
	cout << endl;
	system("PAUSE");
	return 0;
}
