void Date::nextDay(){

	if ( month != 12 && day == 31) {
		month++;
		day = 1;
	}
	else if ( month == 12 && day == 31){
		year++;
		day = 1;
		month = 1;
	}
	else if ( day <= 30 && month !=12){
		day++;
	}
	cout << month <<'/' << day << '/'<< year << endl;
}

b. Modify the Date class defined in Program 10.1 to include a priorDay() method that decrements
a date by one day. Test your method to ensure that it decrements days into a prior
month and into a prior year correctly.

void Date::priorDay(){

	if ( month != 1 && day == 1) {
		month--;
		day = 31;
	}
	else if ( month == 1 && day == 1){
		--year;
		day = 31;
		month = 12;
	}
	else if ( day <= 30 && month !=12){
		day--;
	}
	cout << month <<'/' << day << '/'<< year << endl;
}
