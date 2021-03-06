#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

//  Дано дві матриці А і В однакової розмірності row*col.Написати функцію, 
//  яка знаходить матрицю Х розмірністю row*col, 
//  для заповнення якої брався б більший з двох відповідних елементів матриць А і В.

int **ResMem(int N) {
	int **Array = new int*[N];
	for (int i = 0; i < N; i++) {
		Array[i] = new int[N];
	}
	return Array;
}

void DelMem(int **Array,int N) {
	for (int i = 0; i < N; i++) {
		delete Array[i];
	}
	delete Array;
}

void RandArray(int **Array, int cnt) {
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			Array[i][j] = rand() % 21;
		}
	}
}

void PrintArray(int **Array, int cnt) {
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

int **CheckArray(int **ArrayA, int **ArrayB, int cnt) {
	int **ArrayC = ResMem(cnt);
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			if (ArrayA[i][j] >= ArrayB[i][j])
				ArrayC[i][j] = ArrayA[i][j];
			else
				ArrayC[i][j] = ArrayB[i][j];
		}
	}
	return ArrayC;
}

int main()
{   
	srand(time(0));

	int N;
	cout << "Enter N ";
	cin >> N;

	int **ArrayA = ResMem(N);
	int **ArrayB = ResMem(N);

	RandArray(ArrayA, N);
	RandArray(ArrayB, N);

	PrintArray(ArrayA, N);
	PrintArray(ArrayB, N);

	int **ArrayC = CheckArray(ArrayA, ArrayB, N);
	
	PrintArray(ArrayC, N);

	DelMem(ArrayA, N);
	DelMem(ArrayB, N);
	DelMem(ArrayC, N);
}
