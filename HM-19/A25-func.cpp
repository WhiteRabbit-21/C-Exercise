#include "pch.h"
#include <iostream>
using namespace std;

float f(float x, float y) {
	const float e = 2.718;
	x = (pow(e, x - 1) + pow(e, -x + 1)) / (pow(2, y - 1) + pow(2,-y + 1));
	return x;
}

int main()
{
	float x;
	cout << "Enter x ";
	cin >> x;

	float y;
	cout << "Enter y ";
	cin >> y;

	cout << f(0, 2) << endl;
	cout << f(2, 0) << endl;
	cout << f(x, y) << endl;
	cout << f(x + 1, y + 1) << endl;
	cout << f(1.0 / x, 1.0 / y) << endl;
	cout << f(log(3), x*y) << endl;

}