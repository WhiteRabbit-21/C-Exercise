#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void RandArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 10;
	}
}

void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << " ";
	}
}

void NewArray(int cnt, int Array[], int K, int A) {
	for (int i = 0; i < cnt; i++) {
		if (Array[i] % K == 0) {
			Array[i] = A;
		}
		else if (Array[i] % 3 == 0) {
			Array[i] = 3;
		}
		else if (Array[i] % K + 3 == 0) {
			Array[i] = K;
		}
	}
}
/*23.	Для заданого лінійного масиву, що містить N цілих чисел, виконати заміни:
•	елементи, що кратні K, замінити на A;
•	елементи, що кратні 3, замінити на 3;
•	елементи, що кратні K+3, замінити на К.
*/
int main()
{
	const int size = 10;
	int Array[size];

	int cnt;
	cout << "Enter cnt";
	cin >> cnt;

	int K;
	cout << "Enter K";
	cin >> K;

	int A;
	cout << "Enter A";
	cin >> A;

	RandArray(cnt, Array);

	PrintArray(cnt, Array);

	NewArray(cnt, Array, K, A);

	cout << endl;

	PrintArray(cnt, Array);
}