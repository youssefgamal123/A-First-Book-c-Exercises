#include <iostream>
using namespace std;

class time{

private:
  int hours, minutes,seconds;

public:
  time(); // constructor
  time(long);



//  time (long);
  void getdata();

};

time::time(){
  hours= 0;
  minutes = 0 ;
  seconds = 0 ;
}

time::time(long hhmmss){

  	hours = int(hhmmss / 10000.0);   // extract the year
  	minutes = int((hhmmss - hours * 10000.0) / 100.00); // extract the month
  	seconds = int(hhmmss - hours * 10000.0 - minutes * 100.0); // extract the day

}


void time::getdata(){
  cout <<"Hours = "<<hours <<" Minutes = "<<minutes <<" Seconds = "<<seconds<<endl;
}





int main(){
time t(16000);
t.getdata();

  return 0 ;
}
