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
	int convert();              //converts the dates to a sorting order
};
// class implementation section
int Date::convert()
{

	int con = year * 10000 + month * 100 + day;

	return con;
}

b. Include the modified Date class constructed for Exercise 6a in a complete C++ program.

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
	int convert();              //converts the dates to a sorting order
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
	return;
}
int Date::convert()
{

	int con = year * 10000 + month * 100 + day;

	return con;
}
int main()
{
	Date a, b, c(4, 1, 2000),d;  // declare 3 objects
	b.setDate(12, 25, 2009);  // assign values to b's data members
	a.showDate();           // display object a's values
	b.showDate();           // display object b's values
	c.showDate();           // display object c's values

	cout << d.convert()<< endl;

	system("PAUSE");
	return 0;
}
