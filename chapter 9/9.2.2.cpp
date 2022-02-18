#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
using namespace std;
int main()
{
	string filename = "prices.dat";  // put the filename up front
	string line;
	ifstream inFile;
	inFile.open(filename.c_str());
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and display the file's contents
	while (getline(inFile, line))
		cerr << line << endl;
	inFile.close();
	return 0;
}


B:

/*
#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
using namespace std;
int main()
{
	string filename = "prices.dat";  // put the filename up front
	string line;
	ifstream inFile;
	inFile.open(filename.c_str());
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// read and display the file's contents
	while (getline(inFile, line))
		cerr << line << endl;
	inFile.close();
	return 0;
}
*/
