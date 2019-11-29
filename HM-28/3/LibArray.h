#pragma once
#include <iostream>
using namespace std;

template <typename T>
void PrintArray(int cnt, T *mas) {
	cout << " Array mas: ";
	for (int i = 0; i < cnt; i++)
		cout << " " << mas[i];
	cout << endl;
}

template <typename T>
void RandArray(int cnt, T *mas) {
	for (int i = 0; i < cnt; i++)
		mas[i] = rand() % 21;
}

template <typename T>
void ChangeArray(int cnt, T *mas, T x, T y) {
	for (int i = 0; i < cnt; i++)
		if (mas[i] == x)
			mas[i] = y;
}

template <typename Z>
 Z Find(int cnt, Z mas[], Z x) {
	for (int i = 0; i < cnt; i++)
 		if (mas[i] == x)
 			return i;
 	return -1;
 }