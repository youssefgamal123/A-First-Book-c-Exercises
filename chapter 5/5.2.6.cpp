#include <iostream>
#include <iomanip>
using namespace std;
int main(){


int year = 1;
const int DEPRECIATION = 4000;
 int END_OF_YEAR_VALUE = 24000;
int acumlated_deprecitaion = 4000;


cout << "YEAR"<<"\t\t"<<"DEPRECIATION"<<"\t\t"<<"END_OF_YEAR_VALUE"
      <<"\t\t"<<"ACUMLATED_DEPRECITAION\n";

cout << "----\t\t -----------\t\t ---------------\t\t---------------------------\n";


int counter = 1;

while(counter<8){

cout<<year<<"\t\t"<<"   "<<DEPRECIATION<<"\t\t\t\t"<<END_OF_YEAR_VALUE<<"\t\t\t\t"<<acumlated_deprecitaion<<"\n";
year++;
END_OF_YEAR_VALUE-=DEPRECIATION;
acumlated_deprecitaion+=DEPRECIATION;

counter++;



}










return 0 ;



}
