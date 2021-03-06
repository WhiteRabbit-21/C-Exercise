#include "pch.h"
#include <iostream>
using namespace std;
//Задано матрицю Y розміром row*col.
//Знайти два найбільших значення матриці.
//Обробку для цієї задачі можна робити без функцій.

int **ResMem(int Row, int Col) {
	int **Array = new int *[Row];
	for (int i = 0; i < Row; i++) {
		Array[i] = new int[Col];
	}
	return Array;
}

int **RandArr(int Row, int Col) {
	int **Array = ResMem(Row, Col);
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			Array[i][j] = 30 - rand() % 31;
		}
	}
	return Array;
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
int *Max(int **Array, int Row, int Col) {
	int *MaxEl = new int[2];
	int max = Array[0][0];
	int max1 = Array[0][1];
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			if (Array[i][j] > max)
			{
				max1 = max;
				max = Array[i][j];
			}
			else if (Array[i][j] != max && Array[i][j] > max1)
			{
				max1 = Array[i][j];
			}
		}
	}
	MaxEl[0] = max;
	MaxEl[1] = max1;
	return MaxEl;
}

int main()
{
	int Row;
	cout << "Enter Row";
	cin >> Row;

	int Col;
	cout << "Enter Col";
	cin >> Col;

	int **Array = RandArr(Row, Col);
	PrintArray(Array, Row, Col);
	int *MaxEl = Max(Array, Row, Col);
	cout << "Max el are " << MaxEl[0] << " & " << MaxEl[1] << endl;
}
