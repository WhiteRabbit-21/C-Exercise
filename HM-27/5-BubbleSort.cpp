#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

void RandArray(int N, double Array[]) {
	for (int i = 0; i < N; i++) {
		Array[i] = rand() % 11;
	}
}

void PrintArray(int N, double Array[]) {
	for (int i = 0; i < N; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}

 /* 5.	Дано лінійний масив дійсних чисел. Відсортувати масив двома способами наступним чином: спочатку йдуть невпорядковані числа з проміжку [A, B], потім всі інші числа.*/

void BubbleSort(int cnt, double *Array, int A, int B)
{
	double temp;
	bool p = true;
	while (p)
	{
		p = false;
		for (int i = 1; i < cnt; i++) {
			if (!(Array[i - 1] >= A && Array[i - 1] <= B)) {
				//continue;}
			  //else{
				temp = Array[i - 1];
				Array[i - 1] = Array[i];
				Array[i] = temp;
				p = true;
			}
		}
		cnt--;
	}
}

int main() {
	srand(time(0));

	int N;
	cout << "Enter N";
	cin >> N;

	int A;
	cout << "Enter A";
	cin >> A;

	int B;
	cout << "Enter B";
	cin >> B;

	double *Array = new double[N];

	RandArray(N, Array);
	PrintArray(N, Array);
	BubbleSort(N, Array, A, B);
	PrintArray(N, Array);

	delete[]Array;
	Array = nullptr;

}