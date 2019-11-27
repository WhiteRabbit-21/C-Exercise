#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float A;
	cout << "Enter A: " << endl;
	cin >> A;

	float B;
	cout << "Enter B: " << endl;
	cin >> B;

	bool u = pow(A, 2) + pow(B, 2) > 100;
	cout << "u= " << u << endl;
}
