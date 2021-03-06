#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

//Написати функцію, яка генерує масив цілих чисел заданої довжини так, щоб значення елементів не повторювалися. +
//Діапазон значень(два числа) передаються у цю функцію як параметри. +
//Написати функцію, яка б вставляла у масив число А, якщо такого числа в масиві ще немає.+
//Згенерувати два масиви різної довжини. +
//Викликати другу функцію, і дописати у перший масив елементи з другого масиву, яких першому бракує.


void InsToArr(int &N, int *&Array, int S) {

	bool check = false;
	for (int j = 0; j < N; j++) {
		if (Array[j] == S) {
			check = true;
		}
	}
	if (check == false) {

		int *arr = new int[N + 1];

		for (int i = 0; i < N; i++) {
			arr[i] = Array[i];
		}
		arr[N] = S;
		N++;
		delete[]Array;
		Array = arr;
	}
}

void RandArray(int *Array, int A, int B) {

	bool check;
	int Cur_Val;
	int cnt = B - A + 1;

	for (int i = 0; i < cnt; i++) {
		while (true) {
			Cur_Val = A + rand() % cnt;
			check = 0;
			for (int j = 0; j < i; j++) {
				if (Cur_Val == Array[j]) {
					check = 1;
					break;
				}
			}
			if (check == 0) {
				break;
			}
		}
		Array[i] = Cur_Val;
	}
}

void PrintArray(int cnt, int *Array) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i]<<"\t";
	}
	cout << endl;
}

int main()
{
	int A;
	cout << "Enter A: ";
	cin >> A;

	int B;
	cout << "Enter B: ";
	cin >> B;

	int C;
	cout << "Enter C: ";
	cin >> C;

	int D;
	cout << "Enter D: ";
	cin >> D;


	int *Array0 = new int[B - A + 1];
	int *Array1 = new int[D - C + 1];

	int cnt0 = B - A + 1;
	int cnt1 = D - C + 1;

	cout << "First Array: " << endl;
	RandArray(Array0, A, B);
	PrintArray(cnt0, Array0);

	cout << "Second Array: " << endl;
	RandArray(Array1, C, D);
	PrintArray(cnt1, Array1);
	cout << endl;
	/*int S;
	cout << "Enter S: ";
	cin >> S;

	InsToArr(cnt0, Array0, S);
	PrintArray(cnt0, Array0);*/
	bool check;
	for (int i = 0; i < cnt1; i++) {//2 3 4 5 6 7 8 // Array 1
		check = true;
		for (int j = 0; j < cnt0; j++) { //3 4 5 6 7 // Array 0
			if (Array1[i] == Array0[j]) {
				check = false;
				break;
			}
		}
		if (check == true)
			InsToArr(cnt0, Array0, Array1[i]);
	}
	PrintArray(cnt0, Array0);

	delete[]Array0;
	delete[]Array1;
}