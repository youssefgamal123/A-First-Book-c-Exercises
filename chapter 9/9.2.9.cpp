#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "parts.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file



	outFile << "QA310" << setw(10) << 95 << setw(10) << 45 << setw(10) << 50 <<  endl
		<< "CM145"<< setw(10) << 320 << setw(10) << 162 << setw(10) <<  200 << endl
		<< "MS514" << setw(10) << 34 << setw(10) << 20 << setw(10) << 25 << endl
		<< "EN212" << setw(10) << 163 << setw(10) << 150 << setw(10) << 160 << endl;



	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

/*
B:

b. Write a C++ program to create an inventory report based on the data in the file created in
Exercise 9a. The display should consist of the part number, current balance, and the amount
needed to bring the inventory to the minimum level. The current balance is the initial
amount minus the quantity sold.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "parts.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	double currentbal1 = 95 - 45;
	double currentbal2 = 320 - 162;
	double currentbal3 = 34 - 20;
	double currentbal4 = 163 - 150;


	outFile << "QA310" << setw(10) << currentbal1<< setw(10) << 50 <<  endl
		<< "CM145"<< setw(10) << currentbal2<< setw(10) <<  200 << endl
		<< "MS514" << setw(10) <<currentbal3<< setw(10) << 25 << endl
		<< "EN212" << setw(10) << currentbal4 << setw(10) << 160 << endl;



	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}
*/
