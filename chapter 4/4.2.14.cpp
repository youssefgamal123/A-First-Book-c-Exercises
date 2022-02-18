#include <iostream>
using namespace std;
int main(){
char my_ch;
	cout << "Enter your character" << endl;
	cin >> my_ch;
	if (my_ch >= 'a' && my_ch <= 'z'){
		cout << "The character just entered is a lowercase letter." << endl;
	}
	else {cout << "The character just entered is not a lowercase letter." << endl; }
return 0;
}
