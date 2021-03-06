#include "pch.h"
#include <iostream>
using namespace std;

void RandArray(int cnt,float Array[]) {
	float a =-5, b = 5;
	for (int i = 0; i < cnt; i++) {
		Array[i] = (double)rand() * (b - a) / RAND_MAX + a;
	}
}

void PrintArray(int cnt, float Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << " ";
	}
}

void NewArray(int cnt, float Array[], int K, int M, float A) {
	for (int i = K; i <= M; i++) {
		Array[i] *= A;
	}
}
 /*14.	Для заданого лінійного масиву, що містить N дійсних чисел, виконати заміни:
•	елементи з індексами від К до М включно помножити на А;
•	елементи з індексами від 3 до 6 включно помножити на 3.
*/
int main()
{
	const int size = 15;
	float Array[size];

	int N;
	cout << "Enter N";
	cin >> N;

	int K;
	cout << "Enter K";
	cin >> K;

	int M;
	cout << "Enter M";
	cin >> M;

	float A;
	cout << "Enter A";
	cin >> A;

	RandArray(N, Array);

	PrintArray(N, Array);

	cout << endl;

	NewArray(N, Array, K, M, A);

	PrintArray(N, Array);

	cout << endl;

	NewArray(N, Array, 3, 6, 3);

	PrintArray(N, Array);
}