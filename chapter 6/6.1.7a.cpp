
#include <iostream>
using namespace std;

void sqrtfun(){
	cout << "SQUARE           CUBE" << endl;
	cout << "-------- - ------------" << endl;
	for (double num = 1; num <= 10; num++){

		cout << num * num << "            "
		 << num * num * num << endl;


	}
}

	int main(){

	   sqrtfun( );


		system("PAUSE");
		return 0;
	}
