/*1.	Задано матрицю С розміром row*col. Підрахувати в ній кількість мінімальних елементів.*/
#include <iostream>
#include <ctime>
using namespace std;

int main() {
  
	srand(time(0));

	const int srow = 10;
	const int scol = 10;
	int Array[srow][scol];

	int row;
	cout << "Enter row: ";
	cin >> row;

	int col;
	cout << "Enter col: ";
	cin >> col;


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			Array[i][j] = 10 + rand() % 15;
		}
	}

	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < col; j++) {
			cout << Array[i][j] << " ";
		}
	}
	cout << "\n\n";
	int min = Array[0][0];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (Array[i][j] < min)
				min = Array[i][j];
		}
	}
	cout << min << endl;

	int cnt = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (Array[i][j] == min)
				cnt++;
		}
	}
	cout << cnt;


}