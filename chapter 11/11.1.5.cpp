#include <iostream>
using namespace std;

class Time{

private:
  int hrs,mins,secs;

public:
  void input(int h,int m , int s); // funtion to take input
  Time(); // constructor
  void show(); //function to show attributes

};

void Time::input(int h,int m , int s){
hrs=h;
mins=m;
secs = s;
}
Time::Time(){
  hrs=0;
  mins=0;
  secs=0;
}
void Time::show(){
  cout <<"Hour = "<<hrs<<" "<<"Minutes = "<<mins <<" "<<"Seconds = "<<secs<<endl;
}

int main(){

Time a;
a.input(1,22,33);
a.show();
Time b = a;
b.show();


  return 0;
}
