#pragma once
#include "Header.h"

class Fraction
{
	int numerator;
	int denominator;
	int whole;
public:
	Fraction();
	Fraction(int numerator, int denominator, int whole);

	char ReturnOperator();
	void SetValues();

	Fraction operator+(const Fraction &Fra);
	Fraction operator-(const Fraction &Fra);

	Fraction operator*(const Fraction &Fra);
	Fraction operator/(const Fraction &Fra);

	void ShowValues();
	Fraction Reduce();
	
	void ShowMenu();
	~Fraction();
};