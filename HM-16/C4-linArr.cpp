#include <iostream>
#include <time.h>
using namespace std;

int main() {
	/*4.	Дано два лінійних масиви X та Y однакової розмірності. Відняти поелементно від масиву X масив Y.*/
	srand(time(0));

	int N;
	cout << "Enter N" << endl;
	cin >> N;

	const int size = 15;
	int Array1[size];
	int Array2[size];

	for (int i = 0; i < N; i++) {
		Array1[i] = -10 + rand() % 21;
	}


	for (int i = 0; i < N; i++) {
		cout << Array1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; i++) {
		Array2[i] = -10 + rand() % 21;
	}

	for (int i = 0; i < N; i++) {
		cout << Array2[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; i++) {
		Array1[i] -= Array2[i];
	}

	cout << "diference is" << endl;

	for (int i = 0; i < N; i++) {
		cout << Array1[i] << " ";
	}

	cout << endl;
}
