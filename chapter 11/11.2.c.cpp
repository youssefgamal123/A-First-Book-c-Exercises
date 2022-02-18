#include <iostream>
using namespace std;



class Date{

private:
  int month,year,day;

public:
  Date(int , int , int ); // constructor
  bool operator>(Date&); // prototype for operator function
  bool operator<(Date&);

};

Date::Date(int m, int y , int d ){
  month = m;
  year = y;
  d = day;
}

bool Date::operator>(Date& date2){

if (day > date2.day && month >date2.month && year > date2.year){
  return true;
}
else return false;
}

bool Date::operator<(Date& date2){
  if (day < date2.day && month < date2.month && year < date2.year){
    return true;
  }
  else return false;
}

int main(){

Date a(1,2,199) , b(2,3,2020);
cout <<  a.operator>(b)<<endl; // a is not bigger than b so it will return false
cout << b.operator>(a); // b is greater than a so it will return true




  return 0 ;
}
