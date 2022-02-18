#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "employee.dat";  // put the filename up front
	string line;
	ifstream inFile;
	ofstream outFile;
	inFile.open(filename.c_str());
	outFile.open(filename.c_str());
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and copy the file's contents
	for (int i = 1; i < 5; i++){
		cin >> line;
		inFile >> i >> line;
		outFile << i << line << endl;
	}
		inFile.close();
		outFile.close();

	system("PAUSE");
	return 0;
}


/*
B:
b. Modify the program written in Exercise 6a to list the file’s contents on the printer assigned
to your computer.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "employee.dat";  // put the filename up front
	string line;
	ifstream inFile;
	ofstream outFile;
	inFile.open(filename.c_str());
	outFile.open(filename.c_str());
	outFile.open("prn");	// This command is outdated.
if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and copy the file's contents
	for (int i = 1; i < 5; i++){
		cin >> line;
		inFile >> i >> line;
		outFile << i << line << endl;
	}
		inFile.close();
		outFile.close();


	system("PAUSE");
	return 0;
}



*/
