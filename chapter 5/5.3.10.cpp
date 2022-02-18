#include <iostream>
using namespace std;

int main(){



int day;
float amount_owned=0.01;

cout << "Day\t\tAmount Owned"<<endl;
cout << "------\t\t-----------\n";

for (day=1;day<=64;day++){

cout << day<<"\t\t"<<amount_owned<<endl;
amount_owned+=0.01;


  
}












return 0 ;

}
