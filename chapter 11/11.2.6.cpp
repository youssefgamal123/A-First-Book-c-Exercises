// A. function adds 6 months to a given object month and adjusts the result and it assigns the object's day and year to the other
// program will not produce the same result
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
	Date(int = 7, int = 4, int = 2012);   // constructor
	void showDate();      // method to display a date
	void swap(Date);    // method to swap two dates
  void addSixMonths(Date*);
};

void Date::addSixMonths(Date *pt){

pt->month = pt->month + 6;

if (pt->month>12){
  pt->month =pt->month-12;
  pt->year++;

}
day = pt->day;
month=pt->month;
year=pt->year;

}



// class implementation section
Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}
void Date::showDate()
{
	cout << setfill('0')
		<< setw(2) << month << '/'
		<< setw(2) << day << '/'
		<< setw(2) << year % 100;
	return;
}
void Date::swap(Date temp) // method to swap two dates
{
	int tempstore;
	// swap the day member
	tempstore = temp.day;
	temp.day = day;
	day = tempstore;
	// swap the month member
	tempstore = temp.month;
	temp.month = month;
	month = tempstore;
	// swap the year member
	tempstore = temp.year;
	temp.year = year;
	year = tempstore;
	return;
}

int main()
{
	Date oldDate(4, 3, 1999);
	Date newDate(12, 18, 2012);
  //oldDate.showDate();
  cout <<endl;
  //newDate.showDate();
  oldDate.addSixMonths(&newDate);
  oldDate.showDate();

}
