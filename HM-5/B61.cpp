#include <iostream>
#include <math.h>
using namespace std;
//Визначити, чи потрапляє у круг радіуса R із центром у точці (a,b) задана точка з координатами (х, y).
int main() {
	
	cout << "Enter center coordinates A,B: " << endl;
	
	float a;
	cout << "Enter A: ";
	cin >> a;

	float b;
	cout << "Enter B: ";
	cin >> b;

	cout << "Enter point`s coordinates X,Y" << endl;

	float x;
	cout << "Enter x: ";
	cin >> x;

	float y;
	cout << "Enter y: ";
	cin >> y;

	float R;
	cout << "Enter R: ";
	cin >> R;
    
	bool u = pow(x - a, 2) + pow(y - b, 2) <= pow(R, 2);
	cout << "u:" << u << endl;
}


