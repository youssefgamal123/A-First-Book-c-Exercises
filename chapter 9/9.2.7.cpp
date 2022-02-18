#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "info.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	outFile << "B Caldwell"  << setw(10) << 555<< "-" <<88<<"-" <<2222 << setw(10) << 10.50 << setw(10) << 37 << endl
		    << "D Memcheck " << setw(10) << 555 << "-" << 77 << "-" << 4444 << setw(10) << 12.80 << setw(10) << 40 << endl
		    << "R Potter " << setw(10) << 555 << "-" << 77 << "-" << 6666 << setw(10) << 16.54 << setw(10) << 40 << endl
		    << "W Roser" << setw(10) << 555 << "-" << 99 << "-" << 8888 << setw(10) << 11.80 << setw(10) << 35 << endl;

	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

b. Write a C++ program that reads the data file created in Exercise 7a and computes and displays
a payroll schedule. The output should list the Social Security number, name, and gross
pay for each person, calculating gross pay as Hourly Rate × Hours Worked.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "info.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	double money1 = 10.50 * 37;
	double money2 = 12.80 * 40;
	double money3 = 16.54 * 40;
	double money4 = 11.80 * 35;
	outFile << "B Caldwell"  << setw(10) << 555<< "-" <<88<<"-" <<2222 << setw(10) << money1 << endl
		    << "D Memcheck " << setw(10) << 555 << "-" << 77 << "-" << 4444 << setw(10) << money2 << endl
		    << "R Potter " << setw(10) << 555 << "-" << 77 << "-" << 6666 << setw(10) << money3 << endl
		    << "W Roser" << setw(10) << 555 << "-" << 99 << "-" << 8888 << setw(10) << money4 << endl;

	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}
