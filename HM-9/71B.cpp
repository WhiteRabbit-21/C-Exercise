#include <iostream>
using namespace std;

int main() {
  //71.	Дано три довільних числа, знайти добуток тих чисел, які більші за 1;
	float a;
	cout << "Enter a: ";
	cin >> a;

	float b;
	cout << "Enter b: ";
	cin >> b;

	float c;
	cout << "Enter c: ";
	cin >> c;

	float sm = 1;
  
	if (a > 1) {
		sm *= a;
	}
	if (b > 1) {
		sm *= b;
	}
	if (c > 1) {
		sm *= c;
	}
	cout << "dobutok = " << sm << endl;
}