#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

//Дано дві матриці А і В однакової розмірності NxN.Написати функцію,
//що будує матрицю Х розмірністю Nx2N, яка б у перші N стовпців включає стовпці матриці А,
//в наступні – стовпці матриці В.
int **ResMem(int N) {
	int **Array = new int*[N];
	for (int i = 0; i < N; i++) {
		Array[i] = new int[N];
	}
	return Array;
}

void DelMem(int N, int **Array) {
	for (int i = 0; i < N; i++) {
		delete Array[i];
	}
	delete Array[];
}

int **RandArray(int N) {
	int **Array = ResMem(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Array[i][j] = rand() % 21;
		}
	}
	return Array;
}

void PrintArray(int N, int **Array) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

int **NewArr(int **ArrayA, int **ArrayB, int cnt) {
	int **NewMtx = new int *[cnt];
	for (int i = 0; i < cnt; i++) {
		NewMtx[i] = new int[cnt * 2];
	}

	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			NewMtx[i][j] = ArrayA[i][j];
		}
		for (int j = 0; j < cnt; j++) {
			NewMtx[i][j + cnt] = ArrayB[i][j];
		}
	}
	return NewMtx;
}

int main()
{
	srand(time(0));

	int N;
	cout << "Enter N: ";
	cin >> N;

	int **ArrayA = RandArray(N);
	int **ArrayB = RandArray(N);

	PrintArray(N, ArrayA);
	PrintArray(N, ArrayB);

	int **ArrayC = NewArr(ArrayA, ArrayB, N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2; j++) {
			cout << ArrayC[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	DelMem(N, ArrayA);
	DelMem(N, ArrayB);
	DelMem(N, ArrayC);
}
