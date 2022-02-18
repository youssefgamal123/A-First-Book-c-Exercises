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
	bool leapyr();              //converts the dates to a sorting order
};

bool Date::leapyr(){
	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0){
		cout << "This year is a leap year" << endl;
		return true;
	}
	else {
		cout << "This is not a leap year" << endl;
		return false;
	}
}

b. Include the class definition constructed for Exercise 7a in a complete C++ program. The
main() function should display the message The year is a leap year or the message
The year is not a leap year (depending on the Date object’s year value).

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
	bool leapyr();              //converts the dates to a sorting order
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

bool Date::leapyr(){
	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0){
		cout << "This year is a leap year" << endl;
		return true;
	}
	else {
		cout << "This is not a leap year" << endl;
		return false;
	}
}

int main()
{
	Date a, b, c(4, 1, 2000);  // declare 3 objects
	b.setDate(12, 25, 2009);  // assign values to b's data members
	a.showDate();           // display object a's values
	b.showDate();           // display object b's values
	c.showDate();           // display object c's values

	c.leapyr();
	a.leapyr();
	b.leapyr();


	system("PAUSE");
	return 0;
}
