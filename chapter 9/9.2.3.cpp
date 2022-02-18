#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "text.dat";  // put the filename up front
	ofstream outFile;
	ifstream inFile;
	string i;
	outFile.open(filename.c_str());
	inFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	// set the output file stream formats
	inFile >> setiosflags(ios::fixed)
		>> setiosflags(ios::showpoint)
		>> setprecision(2);
	// send data to the file
	cout << "Enter the words" << endl;
	cin >> i;
	inFile >> i;

	outFile << i;
	inFile.close();
	outFile.close();

	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

/*
B:


b. Modify Program 9.6 to read and display the data stored in the text.dat file created in
Exercise 3a.

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;
int main()
{
	string filename = "text.dat";  // put the filename up front
	ofstream outFile;
	ifstream inFile;
	string i;
	outFile.open(filename.c_str());
	inFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	// set the output file stream formats
	inFile >> setiosflags(ios::fixed)
		>> setiosflags(ios::showpoint)
		>> setprecision(2);
	// send data to the file
	cout << "Enter the words" << endl;
	cin >> i;
	inFile >> i;
	cout << i << endl;
	outFile << i;
	inFile.close();
	outFile.close();

	cout << "The file " << filename
		<< " has been successfully written." << endl;
	system("PAUSE");
	return 0;
}

*/
