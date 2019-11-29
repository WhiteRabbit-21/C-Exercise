#include <iostream>
using namespace std;

int main() {
	/*10000
	  11000
	  11100
	  11110
	  11111*/

	const int size = 5;
	int Array[size][size];

	int N = 5;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i < j)
				Array[i][j] = 0;
			else
				Array[i][j] = 1;

		}
	}

	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << Array[i][j] << " ";
		}
	}
}