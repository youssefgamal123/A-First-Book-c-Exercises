void Date::compareDate(Date a, Date b){

	int year1 = a.year * 10000 + a.month * 100 + a.day;
	int year2 = b.year * 10000 + b.month * 100 + b.day;
	if (year1 > year2){
		cout << year1 << endl;
	}
	else{
		cout << year2 << endl;
	}
	return;
}
