#include <iostream>
using namespace std;


void display(char *strng, double size){
	for (int i = 0; i < size; i++){
		cout << *(strng + i) << " ";
	}
	return;
}

int main(){
	char message[] = "Vacation is near";
	display(message, 16);

		system("PAUSE");
		return 0;
	}

b. Modify the display() function written in Exercise 6a to display the first eight elements
of the message array.

#include <iostream>
using namespace std;


void display(char *strng, double size){
	for (int i = 0; i < size; i++){
		cout << *(strng + i) << " ";
	}
	return;
}

int main(){
	char message[] = "Vacation is near";
	display(message, 8);

		system("PAUSE");
		return 0;
	}
  
