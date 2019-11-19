#include "pch.h"
#include <iostream>
using namespace std;

/*4.	Написати функцію, де аргументами будуть діагоналі ромба х та у, 
а результатами –  периметр та площа ромба.*/

void Rhombus(int x, int y, float *S, float *P) {

	*S = (1 / 2.0)* x * y;
	*P = 4 * ( x / sqrt(2));
	
}
int main()
{
	int  x;
	cout << "Enter x: ";
	cin >> x;

	int  y;
	cout << "Enter y: ";
	cin >> y;

	float P, S;

	Rhombus(x, y, &S, &P);
	cout <<"Square is: " << S << endl;
	cout <<"Perimeter is: "<< P << endl;
}
