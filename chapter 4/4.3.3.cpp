#include <iostream>
using namespace std;
int main(){


int grade;

cout << "Enter Grade : ";
cin >> grade;

if (grade>=90)
cout <<'A';
else if (grade<90 && grade>=80)
cout << 'B';
else if (grade<80 && grade>=70)
cout << 'C';
else if(grade<70 && grade>=60)
cout << 'D';
else  cout << "F";








return 0 ;


}
