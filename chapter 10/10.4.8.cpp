#include <iostream>
using namespace std;

class Employee{

private:
  int empId;
  double payrate;
  short maxhrs;

public:
  Employee(); // class constructor
  void changeEmployee(int eid, double pr, double hw); // change employee function
  void showdata(); // displays employee data
  void addEmployee(); // adding new employee

};



Employee::Employee(){
  empId=0;
  payrate = 0.0;
  maxhrs =0;
}
void Employee::changeEmployee(int eid, double pr, double hw){
  empId = eid;
  payrate = pr;
  maxhrs = hw;


}
void Employee::showdata(){
  cout <<"Employee ID = "<<empId <<endl;
  cout <<"Employee Payrate = "<<payrate<<endl;
  cout << "Employee's maximum working hours = "<<maxhrs<<endl;
}

void Employee::addEmployee()
{
	cout << "Enter a new employees info" << endl;
  cout <<"Enter ID : "<<endl;
	cin >> empId;
  cout <<"Enter PayRate "<<endl;
	cin >> payrate;
  cout <<"Enter Working hours : "<<endl;
	cin >> maxhrs;
	showdata();
	return;
}


void menu(); // prototype for menu function

int main(){

menu(); // calling menu function

  return 0 ;
}



void menu(){
Employee o[10]; // creating array of objects
short choice=0;
int i;
int new_empId;
double new_payrate;
short new_maxhrs;

while (choice != 4){
		cout << "Menu" << endl;
		cout << "1. Add an employee" << endl;
		cout << "2. Modify employee data" << endl;
		cout << "3. Delete an employee" << endl;
		cout << "4. exit this menu" << endl;

		cin >> choice;



switch (choice) {
  case 1:
  cout << "Enter item's location to be added" << endl;
  cin >> i; // location of item
  o[i].addEmployee();
  break;

  case 2:
  cout << "Enter New data :"<<endl;
  cout <<"Enter Employee new ID "<<endl;
  cin >> new_empId;
  cout <<"Enter Employee new payRate "<<endl;
  cin>> new_payrate;
  cout <<"Enter new working hours "<<endl;
  cin >> new_maxhrs;
  cout <<"Enter item "<<endl;
  cin >> i ;
  o[i].changeEmployee(new_empId,new_payrate,new_maxhrs);
  o[i].showdata();
  break;


  case 3:
  cout << "Enter item's location to be deleted" << endl;
  cin >> i;
  o[i].changeEmployee(0,0.0,0.0);
  o[i].showdata();
  break;

  case 4:
  system("CLS");
  exit(1);

}


}
}
