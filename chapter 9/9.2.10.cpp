
#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "pay.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file



	outFile << "Callaway, G." << setw(10) << 16.00 << setw(10) << 40 <<  endl
		<< "Hanson, P."<< setw(10) << 15.00 << setw(10) <<  48 << endl
		<< "Lasard, D." << setw(10) << 16.50<< setw(10) << 35 << endl
		<< "Stillman, W." << setw(10) << 12.50 << setw(10) << 50 << endl;
		
		
		
	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

/*
B :

b. Write a C++ program that uses the information in the file created in Exercise 10a to produce
the following pay report for each employee:

Name   Pay Rate   Hours   Regular Pay   Overtime Pay   Gross Pay

Compute regular pay as any hours worked up to and including 40 hours multiplied by the pay
rate. Compute overtime pay as any hours worked above 40 hours at a pay rate of 1.5 multiplied
by the regular rate. The gross pay is the sum of regular and overtime pay. At the end of the
report, the program should display the totals of the regular, overtime, and gross pay columns.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "pay.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	double regularpay = 16 * 40;
	double regularpay2 = 15 * 40;
	double regularpay3 = 16.5 * 35;
	double regularpay4 = 12.50 * 40;

	double OvertimePay = 0;
	double OvertimePay2 = (15 * 8)*1.5;
	double OvertimePay3 = 0;
	double OvertimePay4 = (10 * 12.50)*1.5;

	double GrossPay = regularpay + OvertimePay;
	double GrossPay2 = regularpay2 + OvertimePay2;
	double GrossPay3 = regularpay3 + OvertimePay3;
	double GrossPay4 = regularpay4 + OvertimePay4;



	outFile << "Callaway, G." << setw(10) << 16.00 << setw(10) << 40 <<setw(10) << regularpay << setw(10) << OvertimePay <<setw(10) << GrossPay<<  endl
		<< "Hanson, P." << setw(10) << 15.00 << setw(10) << 48 << setw(10) << regularpay2 << setw(10) << OvertimePay2 << setw(10) << GrossPay2 << endl
		<< "Lasard, D." << setw(10) << 16.50 << setw(10) << 35 << setw(10) << regularpay3 << setw(10) << OvertimePay3 << setw(10) << GrossPay3 << endl
		<< "Stillman, W." << setw(10) << 12.50 << setw(10) << 50 << setw(10) << regularpay4 << setw(10) << OvertimePay4 << setw(10) << GrossPay4 << endl;
		
		
		
	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}
*/