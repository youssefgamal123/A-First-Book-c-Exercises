#include <iostream>
using namespace std;
void change(int parameter, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones);

int main(){

int num,n2,n3,n4,n5,n6,n7;
cout <<"Enter Your Number : "<<endl;
cin >> num;
change(num,n2,n3,n4,n5,n6,n7);


cout << "You get back " << n2<<"  "<< "hundreds"<< endl;
	cout << "You get back " << n3 <<"  "<< "fifties" << endl;
	cout << "You get back " << n4<<"  " << "twenties" << endl;
	cout << "You get back " << n5 <<"  "<< "tens" << endl;
	cout << "You get back " << n6<<"  " << "fives" << endl;
	cout << "You get back " << n7 <<"  " << "ones" << endl;


return 0 ;




}

void change(int parameter, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones)
{

	hundreds = parameter / 100;
	parameter %= 100;
	fifties = parameter / 50;
	parameter %= 50;
	twenties = parameter / 20;
	parameter %= 20;
	tens = parameter / 10;
	parameter %= 10;
	fives = parameter / 5;
	parameter %= 5;
	ones = parameter;

}
