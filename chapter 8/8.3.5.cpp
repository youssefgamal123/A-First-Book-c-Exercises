
#include <iostream>
using namespace std;
int main()
{
	char message[] = { "This is a test" };

	char *mess2 = message;

	for (int i = 0; i < 15; i++){

		cout << *mess2++ << endl;

	}


	return 0;
}
