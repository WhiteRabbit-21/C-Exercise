#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int main() {
	//13.	Дано дві додатніх змінних і три вказівника з виділеною пам'яттю і додатніми значеннями.  Знайти корінь від добутку всіх поданих значень.

	int p1;
	cout << "Enter p1 ";
	cin >> p1;

	int p2;
	cout << "Enter p2 ";
	cin >> p2;

	int *per1 = new int(4);
	int *per2 = new int(2);
	int *per3 = new int(8);

	double res = sqrt(p1*p2*(*per1)*(*per2)*(*per3));
	cout << "result is " << res << endl;
}
  
