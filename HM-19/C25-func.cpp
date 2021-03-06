#include "pch.h"
#include <iostream>
using namespace std;

float y (float x) {
	return cos((abs(x - 3)) / sqrt(x + 3));
}

float F (float x) {
	return (x*x + y(x)*y(x)) / (abs(x) + abs(y(x)) + 1);
}

int main()
{
	int x;
	cout << "Enter x ";
	cin >> x;

	cout << y(x)<<endl;
	cout << F(x);
}