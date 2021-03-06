#include "pch.h"
#include <iostream>
using namespace std;

void PrintArray(int N, int *Array) {
	for (int i = 0; i < N; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}

void RandArray(int A, int B, int *Array) {
	int cnt = B - A + 1;
	for (int i = 0; i < cnt; i++) {
		Array[i] = A;
		A++;
	}
}

void InsToArr(int &N, int *&Array, int S) { //2 3 4 6 7 9.9
	int *arr = new int[N + 1];
	
	/*for (int i = 0; i < N + 2; i++) {
		if (Array[i] < S) {
			arr[i] = Array[i];
		}
		else if (Array[i] == S) {
			arr[i - 1] = Array[i];

			arr[i] = S;
		}
		else if (Array[i] > S) {
			arr[i] = Array[i - 1];
			
		}
	}*/
	int i = 0; //2 4 5 6 8 5 4 6 /s=5

	while (Array[i] < S) { //2,4,
		arr[i] = Array[i];
		i++;
	}

	arr[i] = S; //2,4,5
	i++;

	while (i<N+1) //2,4,5,
	{
		arr[i] = Array[i-1];
		i++;
	}

	N++;
	delete[]Array;
	Array = arr;
}
//Написати функцію, яка генерує впорядкований за зростанням лінійний масив.+
//Діапазон значень(два числа) передаються у цю функцію як параметри.+
//Написати функцію, яка вставляє у впорядкований масив задане значення, не порушивши впорядкованість масиву.
//Викликати цю функцію та вставити в масив число А і число В.
int main()
{
	int A;
	cout << "Enter A: ";
	cin >> A;

	int B;
	cout << "Enter B: ";
	cin >> B;

	int S;
	cout << "Enter S: ";
	cin >> S;

	int tmp = B - A + 1;

	int *Array = new int[tmp];
	RandArray(A, B, Array);
	PrintArray(tmp, Array);

	InsToArr(tmp, Array, S);
	PrintArray(tmp, Array);

	InsToArr(tmp, Array, A);
	PrintArray(tmp, Array);

	InsToArr(tmp, Array, B);
	PrintArray(tmp, Array);
}
