#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "car.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file

	outFile << 55 << setw(10) << 250 << setw(10) << 19 << endl
		<< 62 << setw(10) << 525 << setw(10) << 38 << endl
		<< 71 << setw(10) << 123 << setw(10) << 6 << endl
		<< 85 << setw(10) << 97 << setw(10) << 86 << endl
		<< 97 << setw(10) << 235 << setw(10) << 14 << endl;

	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

b. Write a C++ program that reads the data in the file created in Exercise 8a and displays the
car number, miles driven, gallons of gas used, and miles per gallon (mpg) for each car. The
output should contain the total miles driven, total gallons of gas used, and average mpg for
all cars. These totals should be displayed at the end of the output report.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "car.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file

	double mpg1 = (250 / 19);
	double mpg2 = (525 / 38);
	double mpg3 = (123 / 6);
	double mpg4 = 97 / 86;
	double mpg5 = 235 / 14;
	double totalmile = 250 + 525 + 123 + 97 + 235;
	double totalgal = 19 + 38 + 6 + 86 + 14;
	double total = mpg1 + mpg2 + mpg3 + mpg4 + mpg5;
	double average = (total / 5);

	outFile << 55 << setw(10) << 250 << setw(10) << 19 <<setw(10) << mpg1 << endl
		<< 62 << setw(10) << 525 << setw(10) << 38 <<setw(10) << mpg2 << endl
		<< 71 << setw(10) << 123 << setw(10) << 6 <<setw(10)<< mpg3 << endl
		<< 85 << setw(10) << 97 << setw(10) << 86 <<setw(10)<< mpg4 << endl
		<< 97 << setw(10) << 235 << setw(10) << 14 << setw(10)<<mpg5 << endl
		<<" Total Miles Driven" << setw(10) << totalmile << endl
		<< " Totla Gallons of Gas Used" <<setw(10) << totalgal << endl
		<< " Average mpg for all cars" << setw(10) <<average << endl;

	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
