#include <iostream>
using namespace std;
int main(){
int numcredits;
cout << "Enter your Credits Completed Grade Level" << endl;
cin >> numcredits;
if( numcredits >= 96){
cout << "Senior" <<endl;
}
else if(numcredits >= 64 && numcredits <= 95){
cout << "Junior" << endl;
}
else if( numcredits >= 32 && numcredits <= 63){
cout << "Sophmore" <<endl;
}
else{cout << "Freshman" << endl;
}

}
