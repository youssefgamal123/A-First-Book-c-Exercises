#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class System

// declration section
{

private:
	char computer;
	char printer;
	char screen;
	double compPrice;
	double printPrice;
	double scrnPrice;
public:

	System(char = 'D', double = 500, char = 'H', double = 300, char = 'D', double = 900);
	void setSystem(char, double, char, double, char, double);
	void showSystem();

};

// implenentation section

System::System(char c, double cp, char p, double pp, char s, double sp){
	computer = c;
	compPrice = cp;
	printer = p;
	printPrice = pp;
	screen = s;
	scrnPrice = sp;
}

void System::setSystem(char c, double cp, char p, double pp, char s, double sp){

  computer = c;
  compPrice = cp;
  printer = p;
  printPrice = pp;
  screen = s;
  scrnPrice = sp;
}

void System::showSystem (){
  cout << "The Electroic's prices are"<<endl;
	cout << setw(2) << computer << " $"
		 << setw(3) << compPrice << " Show Printer "

<< setw(2) << printer << " $"
		 << setw(3) << printPrice << "Show Screen"
		 << setw(2) << screen << " $"
		 << setw(3) << scrnPrice << endl;

	return;

}


int main(){
  System a;
  a.showSystem();
}
