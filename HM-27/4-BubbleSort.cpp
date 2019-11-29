#include <iostream>
#include <time.h>
using namespace std;

//4.	Дано лінійний масив цілих чисел. Відсортувати масив двома способами по залишку від ділення на 10.
void RandArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 16;
	}
}

void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}


void BubbleSort(int cnt, int Array[]) {
	bool ask = true;
	while (ask) {
		ask = false;
		for (int i = 1; i < cnt; i++) {
			if (Array[i - 1] % 10 > Array[i] % 10) {
				int tmp = Array[i - 1];
				Array[i - 1] = Array[i];
				Array[i] = tmp;
				ask = true;
			}
		}
	}
}

int main() {
	srand(time(0));

	int N;
	cout << "Enter N";
	cin >> N;

	int* Array = new int[N];

	RandArray(N, Array);
	PrintArray(N, Array);
	BubbleSort(N, Array);
	PrintArray(N, Array);

	delete[]Array;
	Array = nullptr;
}