#include <iostream>
using namespace std;

/*52.	Реалізувати функцію з параметром за замовчуванням CountOdd("Кількість парних") з  трьома параметрами, яка б рахувала кількість парних чисел.
Приклади: CountOdd(2, 3) має повернути 1, CountOdd(4, 6) має повернути 2,
CountOdd(4, 6, 8) має повернути 3, CountOdd(4, 6, 3) має повернути 2*/
int CountOdd(int a, int b, int c = 1);

int main() {

	// int a;
	// cout<<"Enter a ";
	// cin>>a;

	// int b;
	// cout<<"Enter b ";
	// cin>>b;

	// int c;
	// cout<<"Enter c ";
	// cin>>c;

	cout << CountOdd(1, 4);
	cout << endl;
	cout << CountOdd(2, 5, 8);
}

int CountOdd(int a, int b, int c) {
	int cnt = 0;
	if (a % 2 == 0) {
		cnt++;
	}
	if (b % 2 == 0) {
		cnt++;
	}
	if (c % 2 == 0)
		cnt++;
	return cnt;
}
