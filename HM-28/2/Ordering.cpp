#include "pch.h"
#include <iostream>
#include "Header.h"
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));

	int a = rand() % 10;
	int b = rand() % 10;
	int c = rand() % 10;

	cout << a << "\t" << b << "\t" << c << endl;
	 
	Ordering(a, b, c);
	
	cout << a << "\t" << b << "\t" << c << endl;

	/*2.Реалізувати шаблонну функцію Ordering("Впорядкування"), з трьома шаблонними параметрами однакового типу, 
	яка б впорядковувала параметри за зростанням. Приклад: якщо а < b < c, то виклик Ordering(a, b, c)
	нічого не змінює, інакше – обмін значеннями a, b, c так, щоб нерівність була вірною.*/
}
