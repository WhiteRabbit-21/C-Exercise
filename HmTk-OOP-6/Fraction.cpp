#include "Fraction.h"

Fraction::Fraction()
{
}

Fraction::Fraction(int _numerator, int _denominator, int _whole) :
	numerator(_numerator), denominator(_denominator), whole(_whole)
{
}

char Fraction::ReturnOperator()
{
	char res;
	std::cout << "Select the action: " << std::endl;
	std::cin>>res;
	return res;
}

void Fraction::SetValues()
{
	std::cout << "Enter whole part: " << std::endl;
	std::cin >> whole;

	std::cout << "Enter Numerator part: " << std::endl;
	std::cin >> numerator;

	std::cout << "Enter denominator part: " << std::endl;
	std::cin >> denominator;

	std::cout<<std::endl;

}

Fraction Fraction::operator+(const Fraction & Fra)
{
	int numer1;
	numer1 = (whole * denominator) + numerator;

	int numer2;
	numer2 = (Fra.whole * Fra.denominator) + Fra.numerator;

	whole = 0;
	int num = numer1 * Fra.denominator + denominator * numer2;
	int denom = Fra.denominator * denominator;

	return Fraction(num, denom, whole);
}



Fraction Fraction::operator-(const Fraction & Fra)
{
	int numer1;
	numer1 = (whole * denominator) + numerator;
	
	int numer2;
	numer2 = (Fra.whole * Fra.denominator) + Fra.numerator;


	whole = 0;
	int num = numer1 * Fra.denominator - denominator * numer2;
	int denom = Fra.denominator * denominator;

	return Fraction(num, denom, whole);
}

Fraction Fraction::operator*(const Fraction & Fra)
{
	int numer1;
	numer1 = (whole * denominator) + numerator;

	int numer2;
	numer2 = (Fra.whole * Fra.denominator) + Fra.numerator;

	whole = 0;
	int num = numer1 * numer2;
	int denom = Fra.denominator * denominator;
	

	return Fraction(num, denom, whole);
}

Fraction Fraction::operator/(const Fraction & Fra)
{
	int numer1;
	numer1 = (whole * denominator) + numerator;

	int numer2;
	numer2 = (Fra.whole * Fra.denominator) + Fra.numerator;

	whole = 0;
	int num = numer1 * Fra.denominator;
	int denom = numer2 * denominator;

	return Fraction(num, denom, whole);
}

void Fraction::ShowValues()
{
	std::cout << "Whole part is: " << whole <<std::endl;
	std::cout << "Numerator part is: " << numerator << std::endl;
	std::cout << "Denominator part is: " << denominator << std::endl;
	std::cout << std::endl;
}

Fraction Fraction::Reduce()
{
	int m = denominator;
	int	n = numerator;
	int	ost = m % n;
	
	while (ost != 0)
	{
		m = n; 
		n = ost;
		ost = m % n;
	}
	int nod = n;

	//if (nod != 1){
	whole = numerator / denominator;
	denominator /= nod;
	numerator = (numerator / nod) - (whole * denominator);
	//}

	return Fraction(numerator, denominator, whole);
}


void Fraction::ShowMenu()
{
	std::cout << "Fraction Addiction - case '+': " << std::endl;
	std::cout << "Fraction Substracion - case '-': " << std::endl;
	std::cout << "Fraction Multiplication - case '*': " << std::endl;
	std::cout << "Fraction Division - case '/': " << std::endl;
	std::cout << std::endl;
}

Fraction::~Fraction()
{
}
