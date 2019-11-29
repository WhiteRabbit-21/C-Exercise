#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//13.	елементи з 3-тього по (N-1)-ий піднести до квадрату;
	
	int N;
	cout << "Enter N: ";
	cin >> N;

	int arr[N];

	for (int i = 0; i < N; i++) {
		cout << "Enter elem of arr: ";
		cin >> arr[i];
	}

	for (int i = 2; i < N - 1; i++) {
		arr[i] = pow(arr[i], 2);
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}
}