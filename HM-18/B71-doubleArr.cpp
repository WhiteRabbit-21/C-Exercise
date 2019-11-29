#include <iostream>
#include <ctime>
using namespace std;

int main() {
	/*71."Сума та різниця двох матриць". Задано дві матриці А і В однакової розмірності row*col. Побудувати матрицю Х, яка є сумою двох заданих матриць, та матрицю Р, яка є їх різницею.*/

	srand(time(0));
	const int size = 5;

	int Array1[size][size];
	int Array2[size][size];
	int Smatrix[size][size];
	int Dmatrix[size][size];

	int N;
	cout << "Enter N ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Array1[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Array2[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << Array1[i][j] << " ";
		}
	}

	cout << endl;

	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << Array2[i][j] << " ";
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Smatrix[i][j] = Array1[i][j] + Array2[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Dmatrix[i][j] = Array1[i][j] - Array2[i][j];
		}
	}
	cout << "\n\n";

	cout << "Sum of Matrix " << endl;
	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << Smatrix[i][j] << " ";
		}
	}

	cout << "\n\n";

	cout << "Difference of Matrix " << endl;

	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << Dmatrix[i][j] << " ";
		}
	}

}