#include <iostream>
using namespace std;


int main() {
	//1.	Задано натуральні числа N і M. Скоротити дріб N/M.
	int N;
	cout << "Enter N";
	cin >> N;

	int M;
	cout << "Enter M";
	cin >> M;

	int N1;
	int M1;
	N1 = N;
	M1 = M;

	while (N1 != M1) {
		if (N1 > M1)
			N1 = N1 - M1;
		else
			M1 = M1 - N1;
	}

	N = N / N1;
	M = M / M1;

	cout << N << "/" << M << endl;

}
