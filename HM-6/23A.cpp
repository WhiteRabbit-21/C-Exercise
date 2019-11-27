#include <iostream>
#include <math.h>
using namespace std;

int main() {
  
	double const e = 2.71;

	float x;
	cout << "Enter x" << endl;
	cin >> x;

	float y;
	if (x > 1) {
		y = sqrt(x + 1) - 3;
	}
	else {
		y = pow(e, 3 * x) + sin(4);
	}
	cout << "y=" << y << endl;
}