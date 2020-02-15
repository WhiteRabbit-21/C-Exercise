#include "Header.h"
#include "Fraction.h"

Fraction::Fraction() {
}

Fraction::~Fraction()
{

}

double Fraction::GetValuesNum()
{
	cout << "Enter the Numerator" << endl;
	cin >> numerator;
	return numerator;
}

double Fraction::GetValuesDen()
{
	cout << "Enter the Denominator;" << endl;
	cin >> denominator;
	return denominator;
}

void Fraction::ShowValues()
{
	cout << "Numerator is: " << numerator << endl;
	cout << "Denominatoris: " << denominator << endl;
}




