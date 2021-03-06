#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;
/*2.	Для заданого лінійного масиву, що містить N цілих чисел, парні елементи розділити на 2*/

void RandArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 10;
	}
}

void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout <<Array[i]<< " ";
	}
}

void NewArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		if (Array[i] % 2 == 0)
			Array[i] /= 2;
	}
}

int main()
{
	srand(time(0));
	const int size = 10;
	int Array[size];

	int cnt;
	cout << "Enter Cnt";
	cin >> cnt;

	RandArray(cnt, Array);

	PrintArray(cnt, Array);

	cout << endl;

	NewArray(cnt, Array);

	PrintArray(cnt, Array);

}