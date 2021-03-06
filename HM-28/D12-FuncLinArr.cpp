#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

void PrintArray(int cnt, double Array[]){
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}

void RandArray(int cnt, double Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 21;
	}
}

void ChangeArray(int &cnt, double *&Array) {
	double *NArray = new double[cnt * 3];
	int t = 0;
	while (t < cnt * 3) {
		for (int i = 0; i < cnt; i++) {
			NArray[t] = Array[i];
			t++;
		}
	}
	cnt *= 3;
	delete[]Array;
	Array = NArray;
}

int main() {
	srand(time(0));

	int N; 
	cout << "Enter N";
	cin >> N;

	double *Array = new double[N];

	RandArray(N, Array);
	PrintArray(N, Array);
	ChangeArray(N, Array);
	PrintArray(N, Array);


}
	//12.	Дано лінійний масив, що містить N дійсних чисел.«Потроїти» кількість елементів 
	//у масиві наступним чином : наприклад, був масив{ 1, 2, 1, 4 },
	//має стати{ 1, 2, 1, 4, 1, 2, 1, 4, 1, 2, 1, 4 }