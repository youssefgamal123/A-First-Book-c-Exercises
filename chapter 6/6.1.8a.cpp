
#include <iostream>
using namespace std;


void selTab(int start, int maxnum, int increment){
	cout << "SQUARE           CUBE" << endl;
	cout << "-------- - ------------" << endl;
	for (double num = start; num <=(start + maxnum *increment)-1; num = num + increment){

		cout << num * num << "            "
		 << num * num * num << endl;


	}
}

	int main(){

selTab(6,10,2);



		return 0;
	}
