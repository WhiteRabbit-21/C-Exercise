#include <iostream>
#include <math.h>
using namespace std;
//Визначити, чи потрапляє у круг радіуса R із центром у точці (a,b) задана точка з координатами (х, y).
int main() {
    
    cout<<"Enter center`s coordinate a, b ";
	
	float a;
	cout << "Enter a: ";
	cin >> a;

	float b;
	cout << "Enter b: ";
	cin >> b;


	cout << "Enter point`s coordinates x, y " << endl;

	float x;
	cout << "Enter x: ";
	cin >> x;

	float y;
	cout << "Enter y: ";
	cin >> y;

	int R;
    cout<<"Enter R";
	cin >> R;

	bool u = pow(x - a, 2) + pow(y - b, 2) <= R * R;
	cout << "u: " << u << endl;
}


