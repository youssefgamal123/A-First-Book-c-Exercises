int Date::dayOfWeek()
{

	if (month < 3){
		month = month + 12;
		year = year - 1;
	}

	int century = int(year / 100);
	int year1 = year % 100;
	int  T = day + int(26 * (month + 1) / 10) + year + int(year / 4);
	int(century / 4) - 2 * century;
	int DayOfWeek = T % 7;
	if (DayOfWeek < 0){
		DayOfWeek = DayOfWeek + 7;
	}

	return DayOfWeek;
}

b. Include the class definition constructed for Exercise 8a in a complete C++ program. The
main() function should display the name of the day (Sun, Mon, Tue, and so on) for the
Date object being tested.

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
	Date(int = 7, int = 4, int = 2012); // constructor
	void setDate(int, int, int);   // member method to copy a date
	void showDate();               // member method to display a date
	void dayOfWeek();
};
// class implementation section
Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}
void Date::setDate(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
	return;
}
void Date::showDate()
{
	cout << "The date is ";
	cout << setfill('0')
		<< setw(2) << month << '/'
		<< setw(2) << day << '/'
		<< setw(2) << year % 100; // extract the last 2 year digits
	cout << endl;
	;
	return;
}

void Date::dayOfWeek()
{

	if (month < 3){
		month = month + 12;
		year = year - 1;
	}

	int century = int(year / 100);
	int year1 = year % 100;
	int  T = day + int(26 * (month + 1) / 10) + year + int(year / 4);
	int(century / 4) - 2 * century;
	int DayOfWeek = T % 7;
	if (DayOfWeek < 0){
		DayOfWeek = DayOfWeek + 7;
	}
	if (DayOfWeek == 0){
		cout << "Sat" << endl;
	}
	else if (DayOfWeek == 1){
		cout << "Sun" << endl;
	}
	else if (DayOfWeek == 2){
		cout << "Mon" << endl;
	}
	else if (DayOfWeek == 3){
		cout << "Tues" << endl;
	}
	else if (DayOfWeek == 4){
		cout << "Wed" << endl;
	}
	else if (DayOfWeek == 5){
		cout << "Thur" << endl;
	}
	else if (DayOfWeek == 6){
		cout << "Fri" << endl;
	}
	return;
}

int main()
{
	Date a, b, c(4, 1, 2000);  // declare 3 objects
	b.setDate(12, 25, 2009);  // assign values to b's data members
	a.showDate();           // display object a's values
	b.showDate();           // display object b's values
	c.showDate();           // display object c's values


	a.dayOfWeek();
	b.dayOfWeek();
        c.dayOfWeek();

	system("PAUSE");
	return 0;
}
