#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));

	const int srow = 5;
	const int scol = 5;
	int Array[srow][scol];


	int row;
	cout << "Enter row";
	cin >> row;

	int col;
	cout << "Enter col";
	cin >> col;

	int cnt1 = 0, cnt2 = 0;


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			Array[i][j] = rand() % 200;
		}
	}

	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < col; j++) {
			cout << Array[i][j] << " ";
		}
	}
	cout << endl;
	/*21.	кількість елементів, які  належать проміжку 1-100   і кількість елементів, які належать проміжку 101-200  ;*/

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (Array[i][j] <= 100 && Array[i][j] >= 1)
				cnt1++;
			else if ((Array[i][j] <= 200 && Array[i][j] > 100))
				cnt2++;
		}
	}
	cout << " Quantity elem of first range " << cnt1 << endl;
	cout << "Quantity elem of second range " << cnt2 << endl;

}