#include <iostream>
#include <math.h>
using namespace std;

/*36.	Знайти косинуси всіх кутів трикутника зі сторонами A, B, C.*/

int main() {

	float a;
	cout << "Enter a: " << endl;
	cin >> a;

	float b;
	cout << "Enter b: " << endl;
	cin >> b;

	float c;
	cout << "Enter c: " << endl;
	cin >> c;

	float cos_a;
	cos_a = ((b*b) + (c*c) - (a*a)) / (2 * b*c);
	cout << "cos(a): " << cos_a << endl;

	float cos_b;
	cos_b = ((a*a) + (c*c) - (b*b)) / (2 * a*c);
	cout << "cos(b): " << cos_b << endl;

}