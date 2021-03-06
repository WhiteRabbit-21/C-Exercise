#include "pch.h"
#include <iostream>
#include "Header1.h"
using namespace std;

template <typename Type>
int CountOdd(Type a, Type b, Type c) {
	return 3 - (a % 2 + b % 2 + c % 2);
}

template <typename U>
void CountPositive(U a, U b, U c, int &cnt) {
	cnt = 0;
	if (a > 0) cnt++;
	if (b > 0) cnt++;
	if (c > 0) cnt++;
}

int main()
	{
		///* виклик функції залежить від типу формальних параметрів */
		//cout << "    max(2.0, 5.0): " << max(2.0, 5.0) << endl;
		//cout << " max((float)2, (float)5): " << max((float)2, (float)5) << endl;
		//cout << "        max(2, 5): " << max(2, 5) << endl;
		//cout << " max(true, false): " << max(true, false) << endl;

		///* помилка - немає перегрузки max(double, int) */
		//// cout << "     max(2.0, 5): " << max(2.0, 5) << endl;
		//cout << endl;
		//cout << "    min(2.0, 5.0): " << min(2.0, 5.0) << endl;
		//cout << " min((float)2, (float)5): " << min((float)2, (float)5) << endl;
		//cout << "        min(2, 5): " << min(2, 5) << endl;
		//cout << " min(true, false): " << min(true, false) << endl;

		cout << endl;
		cout << "    CountOdd(1, 2, 2): " << CountOdd(1, 2, 2) << endl;

		cout << endl;
		cout << "      Suma(8, 2):" << Suma(8, 2) << endl;
		cout << "    Suma(8, 2.0):" << Suma(8, 2.0) << endl;
		cout << "    Suma(8.0, 2):" << Suma(8.0, 2) << endl;
		double a = 2.87;
		double b = 5.67;
		int c = 3;
		int d = 7;
        cout << c << "\t" << d << endl;
		Change(c, d);
		cout << c << "\t" << d << endl;

		cout << a << "\t" << b << endl;
		Change(a, b);
		cout << a << "\t" << b << endl;

		system("Pause");
	
}
