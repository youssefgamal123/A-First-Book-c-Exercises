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

Time::Time(int h, int m, int s){
	hours = h;
	minutes = m;
	secs = s;
}

void Time::getdata(int  s,int m ,int h){
  secs = s;
  minutes = m;
  hours = h;
}

void Time::showdata(){
  cout << secs << " "<< minutes <<" " << hours << endl;
}







int main (){

Time a ;
//a.getdata(1,2,3);
a.showdata(); // testing for constructor method 


}
