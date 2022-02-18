#include <iostream>
using namespace std;

class Time{

private:
  int hours, minutes, seconds;
public:
  Time(int , int , int ); // normal constructor
  Time (long); // type conversion constructor
  void showdata();

};


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

Time::Time(long l )
{

  hours = int(l / 3600);
  	minutes = int((l - hours * 3600) / 60);
  	seconds = int(l - hours * 3600 - minutes * 60);



}

int main(){

Time a(30336L);
a.showdata();



  return 0;
}
