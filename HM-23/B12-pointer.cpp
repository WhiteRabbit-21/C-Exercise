#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//12.	Дано чотири змінних і невизначений вказівник. Направити вказівник на змінну з мінімальним значенням по модулю і вивести значення вказівника.
	int a, b, c, d;
	cout << "Enter a";
	cin >> a;
	cout << "Enter b";
	cin >> b;
	cout << "Enter c";
	cin >> c;
	cout << "Enter d";
	cin >> d;

	int *min;
	min = &a;
	if (abs(*min) > abs(b))
		min = &b;
	if (abs(*min) > abs(c))
		min = &c;
	if (abs(*min) > abs(d))
		min = &d;
	cout << *min;
}