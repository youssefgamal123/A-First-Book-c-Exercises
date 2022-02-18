#include <iostream>
using namespace std;

class Time {

private:
int secs, minutes , hours;

public:

 Time(int =7, int = 40, int = 25) ; // just random values for intialization
  void getdata(int s, int m  ,int h );
  void showdata();




};

void Time::getdata(int  s,int m ,int h){
  secs = s;
  minutes = m;
  hours = h;
}

void Time::showdata(){
  cout << secs << " "<< minutes <<" " << hours << endl;
}
