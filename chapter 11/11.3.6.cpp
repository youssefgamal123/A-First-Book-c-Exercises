#include <iostream>
#include <iomanip>
using namespace std;

// forward declartion for class Ltime
class Ltime;

 // declartion section for class time
class Time{

private:
  int hours, minutes, seconds ;
public:
  Time(int = 0  , int = 0  , int = 0);
  void showdata();
  operator Ltime(); // conversion operator function that changes to lTIME class

};

// declartion section for class Ltime

class Ltime{
private:
  long hhmmss;
public:
  Ltime(long = 0);    // constructor
	operator Time();  // conversion operator from Intdate to Date
	void showint();
};


// implementation section for class Time


Time::Time(int hh, int mm, int ss)  // constructor
{
	hours = hh;
	minutes = mm;
	seconds = ss;
}
// conversion operator function converting from Date to Intdate class
Time::operator Ltime()   // must return an Intdate object
{
	long elapsedsec = hours * 3600 + minutes * 60 + seconds;

	return(Ltime(elapsedsec));
}
// member function to display a Date
void Time::showdata()
{
	cout << setfill('0')
		<< setw(2) << hours << ':'
		<< setw(2) << minutes << ':'
		<< setw(2) << seconds;
	return;
}

// class implementation section for class Ltime


Ltime::Ltime(long hms)  // constructor
{
	hhmmss = hms;
}
// conversion operator function converting from Ltime to Time class
Ltime::operator Time()   // must return a Date object
{
	long hours, minutes, seconds;
	hours = int(hhmmss / 3600);

	minutes = int((hhmmss - hours * 3600) / 60);

	seconds = int(hhmmss - hours * 3600 - minutes * 60);
	return(Time(hours, minutes, seconds));
}
// member function to display an Intdate
void Ltime::showint()
{
	cout << hhmmss;
	return;
}


int main(){

  Time a(1, 31, 20);  // declare two Date objects
  Time b;
    Ltime c, d;  // declare two Intdate objects
  	c = Time(b);      // cast c into a Date object
  	d = Ltime(a);   // cast a into an Intdate object
  	cout << " a's date is ";
  		a.showdata();
  	cout << "\n   as an Time object this time is ";
  	    d.showint();
  	cout << "\n c's time is ";
  		c.showint();
  	cout << "\n   as a Time object this time is ";
  	    b.showdata();
  	cout << endl;



  return 0;

}
