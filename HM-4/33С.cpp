#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float D1; 
	cout << "Enter D1: ";
	cin >> D1;

	float D2;
	cout << "Enter D2: ";
	cin >> D2;

	const double pi = 3.14159;

	float S1;
	S1 = pi * pow(D1 / 2, 2);
  
	float S2;
	S2 = pi * pow(D2 / 2, 2);
  
	float sum;
	sum = S1 + S2;
 
	float R;
	R = sqrt(sum / pi);
  
	float D;
	D = R * 2;
	cout << "D: " << D << endl;
}