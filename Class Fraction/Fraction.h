#pragma once
#include <stdlib.h>
#include <iostream>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction() = default;
	Fraction(int n, int d);
	void random();
	void print();
	int getNumerator();
	int getDenominator();
	void input();

	//static Fraction add(Fraction a, Fraction b);
	//static Fraction sub(Fraction a, Fraction b);
	//static Fraction mult(Fraction a, Fraction b);
	//static Fraction div(Fraction a, Fraction b);


	Fraction add( Fraction b);
    Fraction sub( Fraction b);
	Fraction mult(Fraction b);
	Fraction div(Fraction b);


};

