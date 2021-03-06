#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

//32.	Дано довільне число А та лінійний масив, що містить N дійсних чисел.
// Написати функцію, яка «подвоює» в масиві всі елементи зі значенням А.
// наприклад, був масив{ 1, 2, 3, 1, 2, 3, 4, 5, 6 },
// при А = 2 має бути{ 1, 2, 2, 3, 1, 2, 2, 3, 4, 5, 6 }.

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

void Func(int &cnt, double *&Arr, int p) {

	double *Array = new double[cnt + 1];

	for (int i = 0; i <= p; i++) {
		Array[i] = Arr[i];
	}
	cout << endl;
	p++;
	Array[p] = Arr[p - 1];

	for (int i = p; i < cnt + 1; i++) {
		Array[i] = Arr[i - 1];
	}
	cnt++;

	delete[]Arr;
	Arr = Array;
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

	for (int i = 0; i < N; i++) {
		if (Array[i] == A) {
			Func(N, Array, i);
			i++;
		}
	}
	PrintArray(Array, N);
}