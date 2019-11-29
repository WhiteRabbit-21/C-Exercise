#include <iostream>
#include <cmath>
using namespace std;

int main() {
	/*23.	числами з послідовності  , де  */
	const int size = 15;
	float Array[size];

	int N;
	cout << "Enter N ";
	cin >> N;

	Array[0] = 0;

	for (int i = 1; i < N; i++) {
		Array[i] = Array[i - 1] + sqrt(Array[i - 1] + 1);
	}

	for (int i = 1; i < N; i++) {
		cout << "Array is " << Array[i] << endl;;
	}
}