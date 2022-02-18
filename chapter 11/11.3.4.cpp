#include <iostream>
using namespace std;

class Time{

private:
  int hours, minutes, seconds;
public:
  Time(int , int , int ); // normal constructor
  operator long(); // operation conversion function

  void showdata();

};

Time::operator long(){
  long elapsedsec = hours * 3600 + minutes * 60 + seconds;
	return elapsedsec;
}


void Time::showdata(){
  cout <<"Hours = "<<hours<<endl;
  cout <<"Minutes = "<<minutes<<endl;
  cout <<"Seconds = "<<seconds<<endl;
}

Time::Time(int h , int m , int s ){
  hours = h;
  minutes = m;
  seconds = s;
}




int main(){

Time a(6,30,69);
long b ;
b = long(a);
cout <<b<<endl;


  return 0;
}
