#include "pch.h"
#include <iostream>
using namespace std;

float f(float x) {
	x = pow(2, x) / (x*x + x + 1);
	return x;
}

int main()
{
	float x;
	cout << "Enter x ";
	cin >> x;

	float a = 2.25;
	float b = 1.69;

	cout << f(5.0) << endl;
	cout << f(x + 10) << endl;
	cout << f(a + b) << endl;
	cout << f(7.25) + f(9.85) << endl;
}