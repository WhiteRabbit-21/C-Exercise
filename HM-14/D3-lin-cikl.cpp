#include <iostream>
using namespace std;

int main() {
	//3.	Знайти найбільший спільний дільник чотирьох заданих натуральних чисел.

	int a;
	cout << " Enter a=";
	cin >> a;

	int b;
	cout << " Enter b=";
	cin >> b;

	int c;
	cout << " Enter c=";
	cin >> c;

	int d;
	cout << " Enter d=";
	cin >> d;

	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	int res2 = b;

	while (c != d) {
		if (c > d)
			c = c - d;
		else
			d = d - c;
	}

	int res1 = d;

	while (res1 != res2) {
		if (res1 > res2)
			res1 = res1 - res2;
		else
			res2 = res2 - res1;
	}


	cout << "NSD " << res2;
}
