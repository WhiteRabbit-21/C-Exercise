#include <iostream>
using namespace std;

//  1.	Дано три довільних числа А, В і С. Заповнити лінійний масив N наступним чином: 
// А, В, С, А, В, С, А, В, С, ….  Функцію для заповнення реалізувати з параметрами за замовчуванням, де А = 0, В = 1, С = 2.

void FillArray(int cnt, int Array[], int A = 0, int B = 1, int C = 2) {
	for (int i = 2; i < cnt + 2; i = i + 3) {
		Array[i - 2] = A;
		Array[i - 1] = B;
		Array[i] = C;
	}
}

void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
	}
}

int main() {
	int N;
	cout << "Enter N";
	cin >> N;

	int *Array = new int[N];

	FillArray(N, Array);
	PrintArray(N, Array);
}