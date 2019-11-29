#include <iostream>
using namespace std;

//24.	добуток елементів з K-гого по (N-1)-ий;
int main() {

	int N;
	cout << "Enter N: ";
	cin >> N;

	int K;
	cout << "Enter K: ";
	cin >> K;

	int arr[N];
	int dob = 1;

	for (int i = 0; i < N; i++) {
		cout << "Enter elem of arr ";
		cin >> arr[i];
	}


	for (int i = K; i < N - 1; i++) {
		dob *= arr[i];
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}
	cout << "\t" << dob << endl;
}
