#include "pch.h"
#include <iostream>
using namespace std;

bool func(int Nu1, int Nu2, int Nu3) {
	return Nu1 < Nu2 && Nu2 < Nu3;
}

int main()
{ /*4.	Написати функцію, яка приймає три числа і перевіряє, чи утворюють ці числа зростаючу послідовність.*/
	int N1;
	cout << "Enter first num ";
	cin >> N1;

	int N2;
	cout << "Enter second num ";
	cin >> N2;

	int N3;
	cout << "Enter third num ";
	cin >> N3;

	bool res = func(N1, N2, N3);
	cout <<" "<< res;
}