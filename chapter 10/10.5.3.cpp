3. (Debug) a. State whether the following three statements in Program 10.9
re = addreal(a,b);
im = addimag(a,b);
Complex c(re,im);  // create a new Complex object
could be replaced by this single statement:
Complex c(addreal(a,b), addimag(a,b));

Yes

b. Verify your answer to Exercise 3a by running Program 10.9 with the suggested replacement
statement.

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
// class declaration section
class Complex
{
	// friends list
	friend double addreal(Complex&, Complex&);
	friend double addimag(Complex&, Complex&);
private:
	double real;
	double imag;
public:
	Complex(double = 0, double = 0);  // constructor
	void display();
};
// class implementation section
Complex::Complex(double rl, double im)
{
	real = rl;
	imag = im;
}
void Complex::display()
{
	char sign = '+';
	if (imag < 0) sign = '-';
	cout << real << sign << abs(imag) << 'i';
	return;
}
// friend implementations
double addreal(Complex &a, Complex &b)
{
	return(a.real + b.real);
}
double addimag(Complex &a, Complex &b)
{
	return(a.imag + b.imag);
}
int main()
{
	Complex a(3.2, 5.6), b(1.1, -8.4);
	double re, im;
	cout << "\nThe first complex number is ";
	a.display();
	cout << "\nThe second complex number is ";
	b.display();
	Complex c(addreal(a, b), addimag(a, b));
	cout << "\n\nThe sum of these two complex numbers is ";
	c.display();
	cout <<endl;
	system("PAUSE");
	return 0;
}
