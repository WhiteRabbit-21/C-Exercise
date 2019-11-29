#include <iostream> 
#include <ctime>
using namespace std;

int main() {
	/*1.	Дано лінійний масив, що містить N дійсних чисел. Знайти суму мінімальних елементів.
  (Приклад. Для масиву { 3, 4, 5, 2, 2, 2, 5, 7 } результатом буде 6, бо мінімальне значення 2 і їх три штуки)
  */
	srand(time(0));
	const int size = 15;
	int Array[size];

	int N;
	cout << "Enter N";
	cin >> N;

	int cnt = 0;

	for (int i = 0; i < N; i++) {
		Array[i] = 5 + rand() % 5;
	}

	for (int i = 0; i < N; i++) {
		cout << Array[i] << " ";
	}

	cout << endl;

	int min = Array[0];

	for (int i = 0; i < N; i++) {
		if (Array[i] < min) {
			min = Array[i];
		}
	}

	for (int i = 0; i < N; i++) {
		if (Array[i] == min) {
			cnt++;
		}
	}


	cout << "Quantity of min el " << cnt;
}