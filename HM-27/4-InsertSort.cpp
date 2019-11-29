#include <iostream>
#include <ctime>
using namespace std;

void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}

void RandArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 21;
	}
}
//4.	Дано лінійний масив цілих чисел. Відсортувати масив двома способами по залишку від ділення на 10.
void InsertSort(int size, int x[]) {
	int tmp;
	int j;
	for (int i = 0; i < size - 1; i++) {
		tmp = x[i + 1];
		for (j = i; j >= 0 && x[j] % 10 > tmp % 10; j--)
			x[j + 1] = x[j];
		x[j + 1] = tmp;
	}
}

int main() {
	srand(time(0));

	int N;
	cout << "Enter N";
	cin >> N;

	int *Array = new int[N];

	RandArray(N, Array);
	PrintArray(N, Array);
	InsertSort(N, Array);
	PrintArray(N, Array);

	delete[]Array;
	Array = nullptr;
}