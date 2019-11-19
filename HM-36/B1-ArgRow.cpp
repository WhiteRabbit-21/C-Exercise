#include "pch.h"
#include <iostream>
using namespace std;
//Задача 1. Знайти кількість парних чисел серед рядків - аргументів.Вивести рядки, які не є числами.
int main(int argc, char *argv[])
{
	int cnt = 0;
	int value;
	for (int i = 0; i < argc; i++) {
		value = atoi(argv[i]);
		
		if (value == 0) {
			cout << argv[i] << endl;
			continue;
		}
		if (value % 2 == 0) {
			cnt++;
		}
	}
	cout << endl;
	cout << cnt << endl;
}
