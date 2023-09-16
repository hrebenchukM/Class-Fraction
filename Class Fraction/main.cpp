#include <stdlib.h>
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction a = Fraction(3, 4);
	Fraction b = Fraction(7, 5);

	cout << "a: ";
	a.print();
	cout << "b: ";
	b.print();

	Fraction aPlusb = Fraction::add(a, b);
	cout << "a+b: ";
	aPlusb.print();
	Fraction aSubB = Fraction::sub(a, b);
	cout << "a-b: ";
	aSubB.print();
	Fraction aMultB = Fraction::mult(a, b);
	cout << "a*b: ";
	aMultB.print();
	Fraction aDivB = Fraction::div(a, b);
	cout << "a/b: ";
	aDivB.print();

	


	
}
