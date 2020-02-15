#include "Actions.h"
#include "Header.h"

double Actions::DiviFrac(double Denom2, double Num2, double Denom1, double Num1)
{
	double num = Num1 * Denom2;
	double denom = Denom1 * Num2;
	double res = num / denom;
	return res;

}

void Actions::ShowMenu()
{
	cout << "       Select fraction`s action: " << endl;
	cout << "\t      1. Addiction       " << endl;
	cout << "\t      2. Substriction    " << endl;
	cout << "\t      3. Multiplication  " << endl;
	cout << "\t      4. Division        " << endl;
	cout << endl;
}

int Actions::GetChoice()
{
	cout << "Enter Num of activity: ";
	cin >> choice;

	return choice;

}

double Actions::MultFrac(double Denom2, double Num2, double Denom1, double Num1)
{
	double num = Num1 * Num2;
	double denom = Denom1 * Denom2;
	double res = num / denom;
	return res;
}

double Actions::AddFrac(double Denom2, double Num2, double Denom1, double Num1)
{
	double tmp1 = Num1 / Denom1;
	double tmp2 = Num2 / Denom2;
	double res = tmp1 + tmp2;
	return res;
}

double Actions::SubsFrac(double Denom2, double Num2, double Denom1, double Num1)
{
	double tmp1 = Num1 / Denom1;
	double tmp2 = Num2 / Denom2;
	double res = tmp1 - tmp2;
	return res;
}
