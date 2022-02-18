class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date(int, int, int);   // constructor
	Date(long = 20120704);           // another constructor
	void showDate();      // member method to display a date
};
