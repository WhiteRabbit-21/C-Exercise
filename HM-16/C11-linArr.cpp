#include <iostream>
using namespace std;

int main() {
/*В заданому лінійному масиві, що містить N дійсних чисел, виконати заміни у відповідності з указаним правилом:
11.	всі елементи, що дорівнюють елементу з індексом 2, замінити нулями;

*/
	int const size = 15;
	int Array[size];

	int N;
	cout << "Enter N";
	cin >> N;

 
	for (int i = 0; i < N; i++) {
		cout << "Enter elem of array ";
		cin >> Array[i];
	}
	float el2 = Array[2];

  
	for (int i = 0; i < N; i++){
		if (Array[i] == el2) {
			Array[i] = 0;
		}
	}

	for (int i=0;i<N;i++){
	  cout << Array[i] << endl;
	}
}
