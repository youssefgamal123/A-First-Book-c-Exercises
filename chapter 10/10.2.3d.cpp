



System::System(char c, double cp, char p, double pp, char s, double sp){
	computer = c;
	compPrice = cp;
	printer = p;
	printPrice = pp;
	screen = s;
	scrnPrice = sp;
} // constructor


void System::setSystem(char c, double cp, char p, double pp, char s, double sp){
  computer = c;
  compPrice = cp;
  printer = p;
  printPrice = pp;
  screen = s;
  scrnPrice = sp;


}

  void System::showSystem(){

    cout << "The Electroic's prices are";
    	cout << setw(2) << computer << " $"
    		 << setw(3) << compPrice << " Show Printer "
    		 << setw(2) << printer << " $"
    		 << setw(3) << printPrice << "Show Screen"
    		 << setw(2) << screen << " $"
    		 << setw(3) << scrnPrice << endl;

  };
