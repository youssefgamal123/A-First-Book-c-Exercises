12. (Modify) a. Rewrite the comparison operator function in Program 11.1 as a friend function.

Done!!

b. Verify the operation of the friend operator function written for Exercise 12a by including it
in a working C++ program.

#include "stdafx.h"
#include <iostream>
using namespace std;
// class declaration section
class Date
{
	friend bool operator==(Date&, Date&);
private:
	int month;
	int day;
	int year;

public:
	Date(int = 7, int = 4, int = 2012);  // constructor
	//bool operator==(Date&);  // prototype for the operator== function

};
// class implementation section
Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}
bool operator==( Date& date2, Date& date1)
{
	if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
		return true;
	else
		return false;
}


int main()
{
	Date a(4, 1, 2012), b(12, 18, 2010), c(4, 1, 2012); // declare 3 objects
	if ( a == b)
		cout << "Dates a and b are the same." << endl;
	else
		cout << "Dates a and b are not the same." << endl;
	if (a == c)
		cout << "Dates a and c are the same." << endl;
	else
		cout << "Dates a and c are not the same." << endl;
	system("PAUSE");
	return 0;
}
