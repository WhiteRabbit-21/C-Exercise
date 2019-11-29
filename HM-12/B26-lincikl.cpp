#include <iostream>
#include <math.h>
using namespace std;

/*26)  Знайти два найменших члена послідовності, які перевищують задане число Х.*/
int main() {
	float A3, A1, A2;
	A1 = sqrt(1.101);
	A2 = 104.0 / 103;

	double x;
	cout << "Enter X";
	cin >> x;

	int N;
	cout << "Enter N";
	cin >> N;

	do {
		A3 = sqrt(A1*A1 + 1) + A2 * log(A1) / log(3);
		A1 = A2;
		A2 = A3;
	} while (A3 < x);

	cout << " first elem : " << A3 << endl;
	A3 = sqrt(A1*A1 + 1) + A2 * log(A1) / log(3);
	cout << " second elem: " << A3 << endl;
}



  

