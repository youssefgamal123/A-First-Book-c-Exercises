#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
using namespace std;
int main()
{
	string filename; // declare a string object with no initialization
	fstream inFile;
	cout << "Please enter the name of the file you wish to open : ";
	cin >> filename;
	inFile.open(filename.c_str(),ios::app);  // open the file
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file named " << filename
			<< " was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	cout << "\nThe file has been successfully opened for reading.\n";
	return 0;
}
/*
B:

#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
using namespace std;
int main()

{
	string filename; // declare a string object with no initialization
	ifstream inFile;
	cout << "Please enter the name of the file you wish to open : ";
	cin >> filename;
	inFile.open(filename.c_str());  // open the file
	inFile.close();
	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file named " << filename
			<< " was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	cout << "\nThe file has been successfully opened for reading.\n";
	return 0;
}

*/
