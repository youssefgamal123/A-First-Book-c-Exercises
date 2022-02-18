#include <iostream>
using namespace std;
// class declaration section
class Employee
{
private:
	static double taxRate;
	int idNum;
	static int numemps;
public:
	Employee(int = 0);      // constructor
	void display();         // accessor method
	static void dispRate(static int = 0); // static member method
};
// static member definition
double Employee::taxRate = 0.07;
// class implementation section
Employee::Employee(int num)
{
	idNum = num;
}
void Employee::display()
{
	cout << "Employee number " << idNum;
	cout	<< " has a tax rate of " << taxRate << endl;
	return;
}
void Employee::dispRate(static int i)
{
	cout << "The static tax rate is " << taxRate << endl;

	cout << i << endl;
	return;
}
int main()
{
	int i = 0;
	Employee emp1(11122), emp2(11133),emp3(11144),emp4(11155),a,b,c;
	Employee::dispRate(i++);   // call the static member methods
	emp1.display();
	Employee::dispRate(i++);
	emp2.display();
	Employee::dispRate(i++);
	emp3.display();
	Employee::dispRate(i++);
	emp4.display();

	system("PAUSE");
	return 0;
}
