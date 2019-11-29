#include <iostream>
using namespace std;

int main() {
	//2.	Дано три змінні. Оголосити п’ять вказівників, перший з яких направити на першу змінну, два наступних – на другу і решту – на третю. Вивести значення першого, третього і п’ятого вказівників.

	int a, b, c;
	cout << "Enter A";
	cin >> a;
	cout << "Enter B";
	cin >> b;
	cout << "Enter C";
	cin >> c;

	int *d1, *d2, *d3, *d4, *d5;
	d1 = &a;
	d2 = &b;
	d3 = &b;
	d4 = &c;
	d5 = &c;

	cout << *d1 << "\t" << *d3 << "\t" << *d5;

}