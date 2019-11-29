#include <iostream>
#include <math.h>
using namespace std;

int main() {

float a1,a2,a3;


int N;
cout << "Enter N" << endl;
cin >> N;

a1 = sqrt(2) - 1;
a2 = 4 + sin(4);
float sum = a2;
float dob = a2;
//do while
int i = 1;
do {
	a3 = (log(a2 + 7 / log(2))) / abs(5 - tan(a1)) + a1;

	sum += a3;;
	dob *= a3;
	cout << "a3:" << a3 << "\n";
	a1 = a2;
	a2 = a3;

	i++;
} while (i <= N);

cout << "Suma" << sum << "\n";
cout << "Dobutok" << dob << "\n";
}
