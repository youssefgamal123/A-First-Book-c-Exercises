
Date Date::operator+(int days)
{
	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	Date temp;  // a temporary date to store the result
	temp.day = day + days;   // add the days
	temp.month = month;
	temp.year = year;
	for (int i = 0; i < 12; i++)
	{
		while (temp.day > arr[i])    // adjust the months
		{
			temp.month++;
			temp.day -= arr[i];
		}
	}
	while (temp.month > 12)  // adjust the years
	{
		temp.year++;
		temp.month -= 12;
	}
	return temp;     // the values in temp are returned
}

b. Verify the operation of the operator function written for Exercise 10a by including it in a
working C++ program.


#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <tuple>
#include <iostream>
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
	Date(int = 7, int = 4, int = 2012);     // constructor
	Date operator+(int); // prototype for the + operator function
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

Date Date::operator+(int days)
{
	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	Date temp;  // a temporary date to store the result
	temp.day = day + days;   // add the days
	temp.month = month;
	temp.year = year;
	for (int i = 0; i < 12; i++)
	{
		while (temp.day > arr[i])    // adjust the months
		{
			temp.month++;
			temp.day -= arr[i];
		}
	}
	while (temp.month > 12)  // adjust the years
	{
		temp.year++;
		temp.month -= 12;
	}
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

int main()

{
	Date oldDate(4, 1, 2011), newDate, coolDate(12,15,2010), finalDate; // declare two objects

	cout << "The initial date is ";
	oldDate.showDate();
	cout << endl;
	newDate = oldDate + 284;   // add in 284 days = 9 months and 14 days

	cout << "The new date is ";
	newDate.showDate();
	cout << endl;

	system("PAUSE");

	return 0;

}
