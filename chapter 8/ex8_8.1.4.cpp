#include <iostream>
using namespace std;

int main(){
int num,count;
long date;
float slope;
double yield;

cout << "Address of num = " << &num << endl;
cout << "Addreas of count  = "<<&count<<endl;
cout <<"Addreas of date = "<<&date<<endl;
cout << "Addreas of slope = "<<&slope<<endl;
cout <<"Addreas of yield  = "<<&yield<<endl;

  return 0 ;
}
/*
b. After running the program written for Exercise 4a, draw a diagram of how your computer
has set aside storage for the variables in the program. On your diagram, fill in the addresses
the program displays.

num   ->|00B3FB0C|->storage set aside last hex digits |0D||0E||0F|
count ->|00B3FB00|->storage set aside last hex digits |01||02||03|
data  ->|00B3FAF4|->storage set aside last hex digits |F5||F6||F7|
slope ->|00B3FAE8|->storage set aside last hex digits |E9||EA||EB|
yield ->|00B3FAD8|->storage set aside last hex digits |D9||DA||DB|

c. Modify the program written in Exercise 4a (using the sizeof() operator discussed in
Section 2.1) to display the amount of storage your computer reserves for each data type.
With this information and the address information provided in Exercise 4b, determine
whether your computer set aside storage for the variables in the order in which they were
declared.

#include <iostream>
using namespace std;

int main(){


	int num, count;
	long date;
	float slope;
	double yield;

	cout << "The address of num is " << sizeof(&num) << endl;
	cout << "The address of count is " << sizeof(&count) << endl;
	cout << "The address of date is " << sizeof(&date) << endl;
	cout << "The address of slope is " << sizeof(&slope) << endl;
	cout << "The address of yield is " << sizeof(&yield) << endl;

	cout << sizeof(num) << endl;
	cout << sizeof(count) << endl;
	cout << sizeof(date) << endl;
	cout << sizeof(slope) << endl;
	cout << sizeof(yield) << endl;

	system("PAUSE");
	return 0;
}


*/
