#include <iostream>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	const int size = 5;
	int Array[size][size];

	int N = 5;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((i + j) % 2 == 0) {
				Array[i][j] = 1;
			}
			else {
				Array[i][j] = 0;
			}
		}
	}


	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << Array[i][j] << " ";
		}
	}
}