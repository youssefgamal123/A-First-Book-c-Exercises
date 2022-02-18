#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "employee.dat";  // put the filename up front
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// send data to the file
	outFile << "Anthony " << setw(5) << 'A' << setw(10) << 10031 << setw(5) << 11.32 << setw(5) << 12 <<'/'<< 18 <<'/'<< 2010 << endl
		<< "Burrows " << setw(5) << 'W' << setw(10) << 10067 << setw(5) << 12.14 << setw(5) << 6 <<'/'<< 9 <<'/'<< 2011 << endl
		<< "Fain " << setw(5) << 'B' << setw(10) << 10083 << setw(5) << 10.79 << setw(5) << 5 << '/'<< 18 <<'/'<< 2011 << endl
		<< "Janney" << setw(5) << 'P' << setw(10) << 10095 << setw(5) << 12.57 << setw(5) << 9 << '/'<< 28 <<'/'<< 2008 << endl
		<< "Smith" << setw(5) << 'G' << setw(10) << 10105 << setw(5) << 9.50 << setw(5) << 12 <<'/'<< 20 <<'/'<< 2006 << endl;
	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

b. Write a C++ program to read the employee.dat file created in Exercise 5a and produce a
duplicate copy of the file named employee.bak.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename2 = "employee.dak";
	string filename = "employee.dat";  // put the filename up front

	string line;
	ifstream inFile;
	ifstream inFile2;
	ofstream outFile;
	inFile.open(filename.c_str());
	inFile2.open(filename2.c_str());
	outFile.open(filename2.c_str());
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and copy the file's contents
	while (getline(inFile, line))

		outFile << line;


	    inFile2.close();
	    inFile.close();
		outFile.close();
	system("PAUSE");
	return 0;
}

c. Modify the program written in Exercise 5b to accept the names of the original and duplicate
files as user input.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	//string filename2 = "employee.dak";
	//string filename = "employee.dat";  // put the filename up front
	string filename, filename2;
	cout << "Enter original file name" << endl;
	cin >> filename;
	cout << "Enter duplicate file name" << endl;
	cin >> filename2;
	string line;
	ifstream inFile;
	ifstream inFile2;
	ofstream outFile;
	inFile.open(filename.c_str());
	inFile2.open(filename2.c_str());
	outFile.open(filename2.c_str());
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and copy the file's contents
	while (getline(inFile, line))

		outFile << line;


	    inFile2.close();
	    inFile.close();
		outFile.close();
	system("PAUSE");
	return 0;
