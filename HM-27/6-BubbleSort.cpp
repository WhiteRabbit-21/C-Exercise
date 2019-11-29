#include <iostream>
#include <ctime>
using namespace std;

void RandArray(int N, int Array[]) {
	for (int i = 0; i < N; i++) {
		Array[i] = rand() % 21;
	}
}

void PrintArray(int N, int Array[]) {
	for (int i = 0; i < N; i++) {
		cout << Array[i] << "\t";
	}
	cout << endl;
}

int Ret(int Num) {
	int tmp, tmp1;
	tmp1 = Num;
	while (Num > 0) {
		tmp = Num % 10;
		if (tmp == 7) {
			return tmp1;
		}
		else {
			Num = Num / 10;
		}
	}
	return 0;
}

//6.	Дано лінійний масив цілих чисел. Відсортувати масив двома способами наступним чином: спочатку йдуть невпорядковані числа, що містять цифру 7, потім всі інші числа.

void BubbleSort(int cnt, int *Array )
{	
	int temp;
	bool p = true; 
	while (p)
	{
		p = false; 
		for (int i = 1; i < cnt; i++)
			if (Ret(Array[i]) != 0) {
				temp = Array[i - 1];
				Array[i - 1] = Array[i];
				Array[i] = temp;
				p = true;
			}
		cnt--;
	}
}



int main() {
	srand(time(0));
	//6.	Дано лінійний масив цілих чисел. Відсортувати масив двома способами наступним чином: спочатку йдуть невпорядковані числа, що містять цифру 7, потім всі інші числа.

	int N;
	cout << "Enter N";
	cin >> N;



	int *Array = new int[N];
	RandArray(N, Array);
	PrintArray(N, Array);
	BubbleSort(N, Array);
	PrintArray(N, Array);

}