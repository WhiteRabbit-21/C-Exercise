#include <iostream>
#include <ctime>
using namespace std;

/*16.	всі елементи, окрім елементів останнього рядка, помножити на 2;*/
int main() {
srand(time(0));
const int srow = 5;
const int scol = 5;
int Array[srow][scol];


int row;
cout << "Enter row: ";
cin >> row;

int col;
cout << "Enter col: ";
cin >> col;

for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		Array[i][j] = rand() % 5;
	}
}

for (int i = 0; i < row; i++) {
	cout << endl;
	for (int j = 0; j < col; j++) {
		cout << Array[i][j] << " ";
	}
}

cout << endl;


for (int i = 0; i < row - 1; i++) {
	for (int j = 0; j < col; j++) {
		Array[i][j] *= 2;
	}
}

for (int i = 0; i < row; i++) {
	cout << endl;
	for (int j = 0; j < col; j++) {
		cout << Array[i][j] << " ";
	}
}

}