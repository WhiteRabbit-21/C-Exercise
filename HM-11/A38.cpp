#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double a; 

	double N;
	cout << "enter N";
	cin >> N;

	a = -7.385*pow(10, 4);
	double dob = a;
	for (int i = 2; i <= N; i++) {
		a = (log(abs(4 * a) + 1.45) / log(5)) / (a + (1.0 / 6) - tan(a + (1.0 / 6)));
		dob *= a;
		cout << "dob is" << dob << endl;;
	}
}