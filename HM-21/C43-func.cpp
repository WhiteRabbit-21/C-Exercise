#include "pch.h"
#include <iostream>
using namespace std;

float Resistance(float R1, float R2) {
	if (R1 == 0 || R2 == 0)
		return 0;
	else
		return R1 * R2 / (R1 + R2);
}

int main()
{
	float R1;
	cout << "Enter first resistance";
	cin >> R1;

	float R2;
	cout << "Enter second resistance";
	cin >> R2;

	float R3;
	cout << "Enter third resistance";
	cin >> R3;

	float R4;
	cout << "Enter fourth resistance";
	cin >> R4;

	float res = Resistance(R1, R3) + R4;
	float GenRes = Resistance(res, R1) + R2;
}