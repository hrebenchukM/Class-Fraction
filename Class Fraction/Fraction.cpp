#include "Fraction.h"
#include <stdlib.h>
#include <iostream>
using namespace std;



Fraction::Fraction(int n, int d)
{
	numerator = n;
	denominator = d;
}
void Fraction::random()
{
	numerator = rand() % 10;
	denominator = rand() % 20;
}
void Fraction::print()
{
	cout << "Fraction=" << numerator << '/' << denominator << endl;
}

int Fraction::getNumerator()
{
	return numerator;
}


int Fraction::getDenominator()
{
	return denominator;
}
void Fraction::input()
{
	cout << "Input numerator:";
	cin >> numerator;
	cout << "Input denominator:";
	cin >> denominator;
}




Fraction Fraction::add(Fraction b)
{
	Fraction result;
	int resultN, resultD;
	if (denominator == b.denominator)
	{
		resultN = numerator + b.numerator;
		resultD = denominator;
	}
	else
	{
		resultD = denominator * b.denominator;
		resultN = numerator * b.denominator + b.numerator * denominator;
	}
	return Fraction(resultN, resultD);
}

/*
Fraction Fraction::add(Fraction a, Fraction b)
{
	Fraction result;
	int resultN, resultD;
	if (a.getDenominator() == b.getDenominator()) {
		resultN = a.getNumerator() + b.getNumerator();
		resultD = a.getDenominator();
	}
	else {
		resultD = a.getDenominator() * b.getDenominator();
		resultN = a.getNumerator() * b.getDenominator() + b.getNumerator() * a.getDenominator();
	}
	return Fraction(resultN, resultD);
}
*/



Fraction Fraction::sub(Fraction b)
{
	Fraction result;
	int resultN, resultD;
	if (denominator == b.denominator)
	{
		resultN = numerator - b.numerator;
		resultD = denominator;
	}
	else
	{
		resultD = denominator * b.denominator;
		resultN = numerator * b.denominator - b.numerator * denominator;
	}
	return Fraction(resultN, resultD);
}


/*
Fraction Fraction::sub(Fraction a, Fraction b)
{
	Fraction result;
	int resultN, resultD;
	if (a.getDenominator() == b.getDenominator()) {
		resultN = a.getNumerator() - b.getNumerator();
		resultD = a.getDenominator();
	}
	else {
		resultD = a.getDenominator() * b.getDenominator();
		resultN = a.getNumerator() * b.getDenominator() - b.getNumerator() * a.getDenominator();
	}
	return Fraction(resultN, resultD);
}
*/



Fraction Fraction::mult(Fraction b)
{
	Fraction result;
	int resultN, resultD;
	resultN = numerator * b.numerator;
	resultD = denominator * b.denominator;
	return Fraction(resultN, resultD);
}

/*
Fraction Fraction::mult(Fraction a, Fraction b)
{
	Fraction result;
	int resultN, resultD;
	resultN = a.getNumerator() * b.getNumerator();
	resultD = a.getDenominator() * b.getDenominator();

	return Fraction(resultN, resultD);
}
*/


Fraction Fraction::div(Fraction b)
{
	Fraction result;
	int resultN, resultD;
	resultN = numerator * b.denominator;
	resultD = denominator * b.numerator;
	return Fraction(resultN, resultD);
}

/*
Fraction Fraction::div(Fraction a, Fraction b)
{
	Fraction result;
	int resultN, resultD;
	resultN = a.getNumerator() * b.getDenominator();
	resultD = a.getDenominator() * b.getNumerator();

	return Fraction(resultN, resultD);
}
*/
