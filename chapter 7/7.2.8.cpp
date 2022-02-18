for (i = 0; i < NUMDISPLAY; i++)
  cout << strtest[i];
NUMDISPLAY is a named constant for the number 14.
-------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	const int NUMDISPLAY = 14;
	char strtest[] = "This is a test";

	for (int i = 0; i < NUMDISPLAY; i++){

		cout << strtest[i] << endl;

	}

	  system("PAUSE");

	return 0;
}

b. Modify the for statement in Exercise 8a to display only the array characters t, e, s, and t.

#include <iostream>
using namespace std;

int main()
{
	const int NUMDISPLAY = 14;
	char strtest[] = "This is a test";

	for (int i = 0; i < NUMDISPLAY; i++){
		switch (strtest[i]){
		case 't':
			cout << strtest[i] << endl;
			break;

case 'e':
			cout << strtest[i] << endl;
			break;
		case 's':
			cout << strtest[i] << endl;
			break;
		case 'T':
			cout << strtest[i] << endl;
			break;
		}

	}
	  system("PAUSE");

	return 0;
}

c. Include the array declaration written in Exercise 8a in a program that uses a cout statement
to display characters in the array. For example, the statement cout << strtest; causes
the string stored in the strtest array to be displayed. Using this statement requires having
the end-of-string marker, \0, as the last character in the array.
#include <iostream>
using namespace std;

int main()
{
	const int NUMDISPLAY = 14;
		char strtest[] = "This is a test\0";
		for (int i = 0; i < NUMDISPLAY; i++){
				cout << strtest[i] << endl;
		}


	  system("PAUSE");

	return 0;
}

d. Repeat Exercise 8a, using a while loop. (Hint: Stop the loop when the \0 escape sequence
is detected. The expression while (strtest[i] != '\0') can be used.)

#include <iostream>
using namespace std;

int main()
{
	const int NUMDISPLAY = 14;
		char strtest[] = "This is a\0 test";
		int i = 0;
			while (strtest[i] != '\0' && i < NUMDISPLAY){
			cout << strtest[i] << endl;
			i++;

		   }



	  system("PAUSE");

	return 0;
}
