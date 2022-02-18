#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;
// class declaration section
class Complex
{
	// friends list
	friend double addComplex(Complex&, Complex&);

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

double addComplex(Complex &a, Complex &b)
{
	double myComp = (a.real + b.real);
	double imagComp = (a.imag + b.imag);
	char sign = '+';
	if (imagComp < 0) sign = '-';
	cout << myComp << sign << abs(imagComp) << 'i';
	return 0;
}

int main()
{
	Complex a(3.2, 5.6), b(1.1, -8.4);
	double re, im;
	cout << "\nThe first complex number is ";
	a.display();
	cout << "\nThe second complex number is ";
	b.display();

	cout << "\n\nThe sum of these two complex numbers is ";
	Complex c(addComplex(a, b));

	cout << endl;
	system("PAUSE");

	return 0;

}
