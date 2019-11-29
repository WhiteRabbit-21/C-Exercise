#include <iostream>
#include <ctime>
using namespace std;

int main() {
  //43.	 Знайти кількість нулів, не враховуючи елементи рядка з індексом K;
  srand(time(0));
 
  const int srow=5;
  const int scol=5;
  int Array[srow][scol];

  int row;
  cout << "Enter row";
  cin >> row;

   int col;
   cout << "Enter col";
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

   int cnt = 0;
   cout << endl;

   int k;
   cout << "Enter k ";
   cin >> k;

   for (int i = 0; i < row; i++) {
	   if (i == k)
		   continue;
	   for (int j = 0; j < col; j++) {
		   if (Array[i][j] == 0)
			   cnt++;
	   }
   }
   cout << "cnt of null is " << cnt << endl;
}