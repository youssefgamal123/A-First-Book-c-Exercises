#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int total_gas = 0;
class Customer{

private:
  int gas,total;
double arrival;
public:
  Customer(); // constructor
  ~Customer(); // destructor
  void arrv();
   void fill_gas(int g);
};

void Customer::fill_gas(int g ){

  gas = g;
  cout <<"Gas = "<<gas<<endl;
  total_gas+=gas;
  cout <<"Total gallons requested = "<<gas<<endl;
}


Customer::Customer(){
  cout<<"A new object has been created "<<endl<<endl;
}
Customer::~Customer(){
  cout<<"Object has been deleted "<<endl;
}

void Customer::arrv(){

  arrival = rand() % 15 + 1;
	cout << "Arrival Time " << arrival << endl;

}

int main(){

int i , howmany,gas_gallon;


cout <<"Enter Number of customers "<<endl;
cin >>howmany;

for (i = 0;i<howmany;i++){

Customer *ctmr = new Customer; // dynamically allocation of memory
ctmr->arrv();
cout <<"Enter Number of gallons of gas "<<endl;
cin>>gas_gallon;
ctmr->fill_gas(gas_gallon);
delete ctmr;


}





  return 0 ;
}
