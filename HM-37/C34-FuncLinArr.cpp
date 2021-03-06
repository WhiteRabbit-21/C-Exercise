#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

/*34.	Дано два різних довільних числа А і В та лінійний масив, 
що містить N дійсних чисел.  Написати функцію, 
яка вставляє в масив після кожного елемента зі значенням А новий елемент зі значенням В. */

void RandArray(float *Array, int N) {
	for (int i = 0; i < N; i++) {
		Array[i] = rand() % 10;
	}
}

void PrintArray(float *Array, int N) {
	for (int i = 0; i < N; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}


void Func(float B, float *&Array, int &N,int ind) {
	float *NewArr = new float[++N];
	ind++;

	for (int i = 0; i < ind; i++) {
		NewArr[i] = Array[i];
	}

	cout << endl;
	NewArr[ind] = B;

	for (int i = ind; i < N - 1; i++) {
		NewArr[i + 1] = Array[i];
	}

	delete[]Array;
	 
	Array = NewArr;
}

int main()
{
	srand(time(0));
	int N;
	cout << "Enter quantity elements of Array: ";
	cin >> N;

	float *Array = new float[N];

	RandArray(Array, N);
	PrintArray(Array, N);
	cout << endl;

	float A;
	cout << "Enter A: ";
	cin >> A;

	float B;
	cout << "Enter B: ";
	cin >> B;

	for (int i = 0; i < N; i++) {
		if (Array[i] == A) {
			Func(B, Array, N, i);
			
		}
	}
	
	PrintArray(Array, N);

}
