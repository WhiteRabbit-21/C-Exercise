#include <iostream>
#include <ctime>
using namespace std;

/*26.	Для заданої матриці розміром row*col знайти кількість елементів за указаною ознакою: від'ємних та додатніх елементів окремо;*/
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

int cnt1 = 0, cnt2 = 0;

for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		Array[i][j] = -5 + rand() % 10;
	}
}

for (int i = 0; i < row; i++) {
	cout << endl;
	for (int j = 0; j < col; j++) {
		cout << Array[i][j] << " ";
	}
}

for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		if (Array[i][j] < 0)
			cnt1++;
		else if (Array[i][j] == 0)
			continue;
		else
			cnt2++;
	}
}

cout << endl;
cout << "Quantity of positive elements" << cnt2 << endl;
cout << "Quantity of negative elements" << cnt1;
}