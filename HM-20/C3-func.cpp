#include "pch.h"
#include <iostream>
using namespace std;

float NSD(float a, float b) {
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}
int main(){

	float F1N;
	cout << "Enter first number ";
	cin >> F1N;

	float S2N;
	cout << "Enter second number ";
	cin >> S2N;

	float T3N;
	cout << "Enter third number ";
	cin >> T3N;

	float F4N;
	cout << "Enter fourth number ";
	cin >> F4N;

	float res1 = NSD(F1N, S2N);

	float res2 = NSD(T3N, F4N);

	float GenRes = NSD(res1, res2);
	
	cout << " NSD is " << GenRes;
    /*3.	Знайти найбільший спільний дільник чотирьох заданих натуральних чисел.*/
}
