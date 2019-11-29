#include <iostream>
using namespace std;
//62.	Дано три довільних числа А, В, С і лінійний масив, що містить N дійсних чисел. Визначити чи містяться в масиві підряд три значення в порядку А, В, С ? Функцію реалізувати з параметрами за замовчуванням, де А = 1, В = 2, С = 3.


void EnterArray(int cnt, double Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << "Enter elem of Array ";
		cin >> Array[i];
	}
}

void PrintArray(int cnt, double Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
	}
}

bool Smth(int cnt, double Array[], double A = 1, double B = 2, double C = 3) {
	for (int i = 0; i < cnt - 2; i++)
		if (Array[i] == A && Array[i + 1] == B && Array[i + 2] == C) {
			return true;
		}
	return false;
}


int main() {
	int N;
	cout << "Enter N" << endl;
	cin >> N;

	// int A;
	// cout<<"Enter A"<<endl;
	// cin>>A;

	// int B;
	// cout<<"Enter B"<<endl;
	// cin>>B;

	// int C;
	// cout<<"Enter C"<<endl;
	// cin>>C;

	double *Array = new double[N];
	EnterArray(N, Array);
	cout << endl;
	PrintArray(N, Array);
	cout << endl;
	cout << Smth(N, Array);

}


