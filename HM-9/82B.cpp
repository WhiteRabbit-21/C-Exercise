#include <iostream>
using namespace std;

int main() {
 // 82.	Дано чотири цілих числа. Знайти кількість чисел, які не кратні N.
 
	int a;
	cout << "Enter a: ";
	cin >> a;

	int b;
	cout << "Enter b: ";
	cin >> b;

	int c;
	cout << "Enter c: ";
	cin >> c;

	int d;
	cout << "Enter d: ";
	cin >> d;

	int N;
	cout<<"Enter N: ";
	cin >> N;

 int res = 0;

 if (a%N != 0) {
	 res++;
 }
 if (b%N != 0) {
	 res++;
 }
 if (c%N != 0) {
	 res++;
 }
 if (d%N != 0) {
	 res++;
 }
 cout << res << endl;
}