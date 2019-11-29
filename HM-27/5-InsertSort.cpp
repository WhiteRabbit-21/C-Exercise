#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

void PrintArray(int cnt, double Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}

void RandArray(int cnt, double Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 11;
	}
}

/* 5.	Дано лінійний масив дійсних чисел. Відсортувати масив двома способами наступним чином: спочатку йдуть невпорядковані числа з проміжку [A, B], потім всі інші числа.*/

void InsertSort(int size, double x[], double A, double B) {
	double tmp;
	int j;
	for (int i = 0; i < size - 1; i++) {
		if (A <= x[i + 1] && x[i + 1] <= B)
			tmp = x[i + 1];
		else
			continue;
		for (j = i; j >= 0 && x[j] != tmp; j--)
			x[j + 1] = x[j];
		x[j + 1] = tmp;
	}
}

int main() {
	srand(time(0));

	int N;
	cout << "Enter N";
	cin >> N;

	double A;
	cout << "Enter A";
	cin >> A;

	double B;
	cout << "Enter B";
	cin >> B;

	double *Array = new double[N];

	RandArray(N, Array);
	PrintArray(N, Array);
	InsertSort(N, Array, A, B);
	PrintArray(N, Array);

	delete[] Array;
	Array = nullptr;
}