#include <iostream>
using namespace std;

void capit(char str, char str2)
{

	int i = 0;
	char c,e;

		c = str;
		e = str2;
		putchar(toupper(c));
		cout << endl;
		putchar(toupper(e));
		cout << endl;
		cout << str << endl;
		cout << str2 << endl;

	return ;
}
// Driver program to test above function
int main()
{
	capit('a', 'b');

	system("PAUSE");
	return 0;
}
