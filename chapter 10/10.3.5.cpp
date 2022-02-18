#include <iostream>
using namespace std;


class Student
{
private:
	int IDnum;
	double grade;
	int total;
public:
	Student(int = 0, double = 0, int = 0);   // constructor
	void averageGrade(int);           // another constructor
	void displayIDAvg();      // member method to display a Student
};
// class implementation section
Student::Student(int ID, double grad, int tot)
{
	IDnum = ID;
	total = tot;
	grade = grad;



}

void Student::averageGrade( int grades){


	int result = grades;


		int average = result ;
		cout << average << endl;
		return;
}
void Student::displayIDAvg()
{
	cout << "The Student is ID & Average is ";
	cout << IDnum << endl;
	averageGrade(100);

	cout << endl;
	return;
}
int main()
{
	Student a, b(374, 98, 1); // declare three objects
	b.displayIDAvg();
	system("PAUSE");
	return 0;
}
