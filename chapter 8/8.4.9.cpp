#include <string>
#include <iostream>
using namespace std;

void trimfrnt(char *str,int size)
{
	char *ptrMsg = str;

	// Find beginning of text
	while (*ptrMsg == ' ')
		ptrMsg++;

	// Copy text to beginning of array
	for (int i = 0; i < size; i++)
		*(str+i) = *ptrMsg++;

	// Reset pointer to beginning of array
	ptrMsg = str;

	// Print array
	cout << "new msg1: ";
	cout << "\"" << ptrMsg << "\"" << endl;
	cout << endl;

	return;
}
// Driver program to test above function
int main()
{
	char msg[] = "    GREAT    ";
	const int size = sizeof(msg) / sizeof(char);

	cout << "Orginal msg:\"" << msg << "\"" << endl;

	trimfrnt(msg, size);


	system("PAUSE");
	return 0;
}
