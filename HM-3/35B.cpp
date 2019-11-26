#include <iostream>
#include <math.h>
using namespace std;

//35.	Діагоналі ромба х та у. Знайти периметр та площу ромба.
int main() {

	float x;
	cout << "Enter x: " << endl;
	cin >> x;

	float y;
	cout << "Enter y: " << endl;
	cin >> y;

	float a;
	a = sqrt(pow(x / 2, 2) + pow(y / 2, 2);
	cout << "Side length: " << a << endl;

	float S;
	S = (1.0 / 2.0)*x*y;
	cout << "S:" << S << endl;
  
	float P;
	P = a * 4;
	cout << "P:" << P << endl;

}