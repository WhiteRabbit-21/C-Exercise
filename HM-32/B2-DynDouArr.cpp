#include "pch.h"
#include <time.h>
#include <iostream>
using namespace std;

int **ResMem(int Row, int Col) {
	int **Array = new int*[Row];
	for (int i = 0; i < Row; i++) {
		Array[i] = new int[Col];
	}
	return Array;
}

void DelMem(int **Array, int N) {
	for (int i = 0; i < N; i++) {
		delete Array[i];
	}
	delete Array;
}

int **RandMtx(int Row, int Col) {
	int **MtxC = ResMem(Row, Col);
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			MtxC[i][j] = rand() % 21;
		}
	}
	return MtxC;
}

void PrintArray(int **Array, int Row, int Col) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void ChangeArray(int **Array, int Row, int Col) {
	int min = Array[0][0];
	int max = Array[0][0];
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			if (Array[i][j] < min) {
				min = Array[i][j];
			}
			if (Array[i][j] > max) {
				max = Array[i][j];
			}
		}
	}
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			if (Array[i][j] == max) {
				Array[i][j] = min;
			}
			else if (Array[i][j] == min) {
				Array[i][j] = max;
			}
		}
	}
}
//Задано матрицю С розміром row*col. Замінити в ній всі максимальні елементи мінімальними і навпаки.
int main()
{
	srand(time(0));

	int Row;
	cout << "Enter Row: ";
	cin >> Row;

	int Col;
	cout << "Enter Col: ";
	cin >> Col;

	int **Array = RandMtx(Row, Col);

	PrintArray(Array, Row, Col);
	ChangeArray(Array, Row, Col);

	PrintArray(Array, Row, Col);
}
