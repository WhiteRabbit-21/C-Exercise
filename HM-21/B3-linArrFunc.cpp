#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void RandArray(int cnt, float Array[]) {
	float a = -5, b = 5;
	for (int i = 0; i < cnt; i++) {
		Array[i]= (float)rand() * (b - a) / RAND_MAX + a;
	}
}

void PrintArray(int cnt, float Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << " ";
	}
}

int cntF(int N, float Array[],int cnt) {
	for (int i = 0; i < N; i++) {
		if (Array[i] > i) {
		cnt++;
		}
	}
	return cnt;
}

int cntS(int N, float Array[], int cnt) {
	for (int i = 0; i < N; i++) {
		if (Array[i] < i) {
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	/*3.	Для заданого лінійного масиву, що містить N дійсних чисел, 
	знайти кількість елементів, які перевищують свій індекс і окремо кількість елементів, які менші за свій індекс.
*/
	srand(time(0));
	const int size = 10;
	float Array[size];

	int N;
	cout << "Enter N ";
	cin >> N;

	int cnt1 = 0, cnt2 = 0;

	RandArray(N,Array);

	PrintArray(N, Array);

	cout << endl;
	cout <<"First 'positive' cnt "<< cntF(N, Array, cnt1);
	cout << endl;
	cout << "Second 'negative' cnt "<< cntS(N, Array, cnt2);
}
