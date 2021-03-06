#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

//33.   Дано ціле число К та лінійний масив, що містить N дійсних чисел.Написати функцію, яка вилучає з масиву кожний К - тий елемент.
//наприклад, був масив{ 1, 2, 3, 1, 2, 3, 4, 5, 6 },
//при К = 2 вилучаємо кожен другий елемент і має стати{ 1, 3, 2, 4, 6 },
//при К = 3 вилучаємо кожен третій елемент і має стати{ 1, 2, 1, 2, 4, 5 },


void RandArray(double *Array, int cnt) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 5;
	}
}

void PrintArray(double Array[], int cnt) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << " ";
	}
	cout << endl;
}

void Func(int &cnt, double *&Arr, int A) {
	int count = 0;
	int tmp = cnt - (cnt / A);
	double *NewArr = new double[tmp];
	for (int i = 0; i < cnt; i++) {
		if ((i + 1) % A != 0) {
			NewArr[count++] = Arr[i];
		}
	}
	cnt = tmp;

	delete[]Arr;
	Arr = NewArr;

}

int main()
{
	srand(time(0));

	int N;
	cout << "Enter quantity of Array`s elements: ";
	cin >> N;

	double *Array = new double[N];

	RandArray(Array, N);
	PrintArray(Array, N);
	cout << endl;

	int A;
	cout << "Enter A: ";
	cin >> A;
	Func(N, Array, A);
	PrintArray(Array, N);
}
