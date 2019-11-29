#include <iostream>
#include <time.h>
using namespace std;

void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << " ";
	}
	cout << "\n\n";
}

void RandArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		Array[i] = rand() % 21;
	}
}

bool Seek(int Num) {
	int prm;
	do {
		prm = Num % 10;
		if (prm == 7)
			return 1;
		else
			Num = Num / 10;
	} while (Num);
	return 0;
}

void InsertSort (int cnt, int Array[]) {
  double tmp;
  int j;
  for (int i = 0; i < cnt - 1; i++) {
	  if (Seek(Array[i + 1]) == 1) {
		  tmp = Array[i + 1];
	  }
	  else {
		  continue;
	  }
	  for (j = i; j >= 0 && Array[j] != tmp; j--) {
		  Array[j + 1] = Array[j];
	  }
      Array[j + 1] = tmp;
}
}

int main(){
  //6.	Дано лінійний масив цілих чисел. Відсортувати масив двома способами наступним чином: спочатку йдуть невпорядковані числа, що містять цифру 7, потім всі інші числа.

  srand(time(0));
  
  int N;
  cout << "Enter N: ";
  cin >> N;

  int *Array = new int [N];
  cout << Seek(N) << endl;

  RandArray(N, Array);
  PrintArray(N, Array);
  InsertSort(N, Array);
  PrintArray(N, Array);

  delete[]Array;
  Array = nullptr;
}