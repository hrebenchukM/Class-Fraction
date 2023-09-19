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

	Fraction aPlusb = a.add( b);
	cout << "a+b: ";
	aPlusb.print();
	Fraction aSubB = a.sub( b);
	cout << "a-b: ";
	aSubB.print();
	Fraction aMultB = a.mult( b);
	cout << "a*b: ";
	aMultB.print();
	Fraction aDivB = a.div( b);
	cout << "a/b: ";
	aDivB.print();

	


	
}
