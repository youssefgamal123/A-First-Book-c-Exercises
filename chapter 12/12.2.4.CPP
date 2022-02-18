#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
// Checkout class
// precondition:
//   srand() must be called once before any member method
// post-conditions:
//   getItems() returns an integer random no. of items between 1 and 20
//   getTime() returns an arrival time between 0.0 and 3.0
// class declaration section
class Checkout
{
private:
	// no class variables
public:
	Checkout() { cout << "\n**** A new Customer has arrived ****\n"; };
	~Checkout()
	{
		cout << "!!!!This Customer object has been deleted !!!!\n";
	};
	int getItems(){ return(1 + rand() % 15); };
	double getTime(){ return((double(rand()) / RAND_MAX) * 3); };
};
int main()
{
	Checkout *anotherTrans;  // declare a pointer to a Checkout object
	int i, howMany;
	cout << "Enter the number of simulations to be created : ";
	cin >> howMany;
	srand(time(NULL));
	for (i = 1; i <= howMany; i++)
	{
		// create a new Checkout object
		anotherTrans = new Checkout;
		// use the pointer to access the member methods
		cout << "The arrival time is " << anotherTrans->getTime() << endl;
		cout << "The number of items is " << anotherTrans->getItems() << endl;
		// delete the object
		delete anotherTrans;
	}
	system("pause");
	return 0;
}
