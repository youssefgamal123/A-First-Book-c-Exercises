#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

class Customer{

private:
  int arrival,gas,total;

public:
  Customer(); // constructor
  ~Customer(); // destructor
  void arrgas();
  static void total_gas();
};


Customer::Customer(){
  cout<<"A new object has been created "<<endl;
}
Customer::~Customer(){
  cout<<"Object has been deleted "<<endl;
}

void Customer::arrgas(){

  arrival = rand() % 15 + 1;
	cout << "Arrival Times " << arrival << endl;
	gas = rand() % 15 + 3;
	cout << "Gas Requested " << gas << endl;
}

int main(){

Customer *newcustomer = new Customer; // dynamically creating an object
newcustomer->arrgas();
delete newcustomer;


  return 0 ;
}
