#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x;
	cout << "Enter х: " << endl;
	cin >> x;
  
	float y;
	cout << "Enter у: " << endl;
	cin >> y;

	float z;
	z = abs(2 * x - 3) + pow(3 * y - 1, 14);
	cout << "z: " << z << endl;
}