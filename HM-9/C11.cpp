#include <iostream>
using namespace std;

int main() {
	//11.	Дано три довільних числа. Знайти суму двох більших чисел.;
	float a, b, c, res;
	cout << "Enter A,B,C";
	cin >> a >> b >> c;;
	if (a <= b && a <= c)
		res = b + c;
	if (b <= a && b <= c)
		res = a + c;
	if (c <= a && c <= b)
		res = a + b;
	cout << "result is " << res << endl;
}