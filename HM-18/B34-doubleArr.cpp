#include <iostream>
#include <ctime>
using namespace std;
//34.	кількість одиниць у головній діагоналі;

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

  for (int i = 0; i < row; i++) {
	  for (int j = 0; j < col; j++) {
		  Array[i][j] = rand() % 2;
	  }
  }

  for (int i = 0; i < row; i++) {
	  cout << endl;
	  for (int j = 0; j < col; j++) {
		  cout << Array[i][j] << " ";
	  }
  }
  int cnt = 0;
  
  for (int i = 0; i < row; i++) {
	  for (int j = 0; j < col; j++) {
		  if (j == i && Array[i][j] == 1)
			  cnt++;
	  }
  }

  cout << endl;
  cout << "cnt is: " << cnt;;
}