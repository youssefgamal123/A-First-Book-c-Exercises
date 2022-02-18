#include <iostream>
#include <iomanip>
using namespace std;
// class declaration section
class Student
{
private:
	int IDnum;
	int count;
	double arr[4];
public:
	Student(int = 0, int = 0, double = 0);    // constructor
	Student operator()(int);   // function prototype
	void showStudent();        // member function to display a Student
};
// class implementation section
Student::Student(int ii, int cc, double aa)
{
	IDnum = ii;
	count = cc;
	arr[count]= aa;

}

void Student::showStudent()
{
	for (count = 1; count < 4; count++) {
		IDnum = count * rand() %1000;
		arr[count] = rand() % 100 + 70;
	}
	double ans = ((arr[0] + arr[1] + arr[2] + arr[3]) / 4);
	cout <<"The student with ID number " << IDnum << " Average is " << ans << endl;
	return;
}
int main()
{
	Student a,b,c; // declare two objects
	cout << "The Student's info is "<< endl;
	a.showStudent();
	b.showStudent();
	c.showStudent();
	system("PAUSE");
	return 0;
}

b. Modify the class constructed for Exercise 3a to include a member operator[] function
that has a double-precision grade count argument. The function should check the grade
count data member and, if fewer than four grades have been entered, store its argument in
the grade array, using the count as an index value. If four grades have already been entered,
the function should return an error message indicating that the new grade can’t be accepted.
Additionally, a new grade should force an increment to the count data member.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
// class declaration section
class Student
{
private:
	int IDnum;
	int count;
	double arr[4];
public:
	Student(int = 0, int = 0, double = 0);    // constructor
	Student operator[](int);   // function prototype
	void showStudent();        // member function to display a Student
};
// class implementation section
Student::Student(int ii, int cc, double aa)
{
	IDnum = ii;
	count = cc;
	arr[count]= aa;

}
Student Student::operator[](int counts)
{
	Student temp;
	temp.count = count + counts;
	while (temp.count > 4){
		cout << "Error new grade can't be accepted" << endl;
		break;
	}
	while (temp.count <= 4){
	   arr[count]++;
	}
	return temp;
}
void Student::showStudent()
{
	for (count = 1; count < 4; count++) {
		IDnum = count * rand() %1000;
		arr[count] = rand() % 100 + 70;
	}
	double ans = ((arr[0] + arr[1] + arr[2] + arr[3]) / 4);
	cout <<"The student with ID number " << IDnum << " Average is " << ans << endl;
	return;
}
int main()
{
	Student a,b,c; // declare two objects
	cout << "The Student's info is "<< endl;
	a.showStudent();
	b.showStudent();
	c = a[5, 6, 7];
	c.showStudent();


	system("PAUSE");
	return 0;
}

c. Modify the class constructed for Exercise 3a to include a member operator() function
that has a grade index and grade value as arguments. The function should force a change to
the grade corresponding to the index value and update the count, if necessary. For example,
an argument list of 4, 98.5 should change the fourth test grade value to 98.5.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
// class declaration section
class Student
{
private:
		int IDnum;
		int count;
		double arr[4];
public:
		Student(int = 0, int = 0, double = 0);    // constructor
		Student operator()(int , double);   // function prototype
		void showStudent();        // member function to display a Student
};
// class implementation section
Student::Student(int ii, int cc, double aa)
{
		IDnum = ii;
		count = cc;
		arr[count] = aa;
}


void Student::showStudent()
{
	double ans = 0;
		for (count = 0; count < 4; count++) {
			IDnum = rand() % 10000;
				arr[count] = rand() % 100;
				ans += arr[count];
		}
		cout << "The student with ID number " << IDnum << " Average is " << (ans/4) << endl;
		return;
}

Student Student::operator()( int counts, double grade)
{
	Student temp;
	for (temp.count = 0; temp.count < 4; temp.count++){

	if(temp.count == counts){
		temp.arr[counts] = grade;
	}
}
	return temp;
}
int main()
{
		Student a, b, c; // declare two objects
		cout << "The Student's info is " << endl;
		a.showStudent();
		b.showStudent();
		c = a(3,98.5);

		c.showStudent();
		system("PAUSE");
		return 0;
}
