#include <iostream>
#include <time.h>
using namespace std;

int main() {
	//22.	Дано одну змінну і три вказівника з виділеною пам'яттю і значеннями. Знайти кількість вказівників, значення яких менші за значення змінної.
	srand(time(0));

	int cnt = 0;

	int per;
	cout << "Enter per ";
	cin >> per;

	int *pnt1 = new int;
	*pnt1 = rand() % 10;

	int *pnt2 = new int;
	*pnt2 = rand() % 10;

	int *pnt3 = new int;
	*pnt3 = rand() % 10;

	cout << "First pnt " << *pnt1 << endl;
	cout << "Second pnt " << *pnt2 << endl;
	cout << "Third pnt " << *pnt3 << endl;

	if (*pnt1 < per)
		cnt++;
	if (*pnt2 < per)
		cnt++;
	if (*pnt3 < per)
		cnt++;

	cout << "cnt is " << cnt << endl;

}
