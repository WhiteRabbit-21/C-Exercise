#include <iostream>
using namespace std;

int main() {
	//2.	Дано чотири цілочисельних змінних і невизначений вказівник. Направити вказівник на першу-ліпшу парну змінну і вивести значення вказівника або надати вказівнику значення nullptr та повідомити, що парних змінних немає. 
	int a, b, c, d;
	cout << "Enter a" << endl;
	cin >> a;

	cout << "Enter b" << endl;
	cin >> b;

	cout << "Enter c" << endl;
	cin >> c;

	cout << "Enter d" << endl;
	cin >> d;

	int *pnt;

	if (a % 2 == 0) {
		pnt = &a;
		cout << "pnt is " << *pnt << endl;
	}
	else if (b % 2 == 0) {
		pnt = &b;
		cout << "pnt is " << *pnt << endl;
	}
	else if (c % 2 == 0) {
		pnt = &c;
		cout << "pnt is " << *pnt << endl;
	}
	else if (d % 2 == 0) {
		pnt = &d;
		cout << "pnt is " << *pnt << endl;
	}
	else {
		pnt = nullptr;
		cout << "Not found even`s numbers" << endl;
	}


}