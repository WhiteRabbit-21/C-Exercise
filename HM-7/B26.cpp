#include <iostream>
using namespace std;


int main() {
	float a; 
	cout << "Enter A yards: " << endl;
	cin >> a;

	float b;
	cout << "Enter B feets: " << endl;
	cin >> b;

	a = a * 36; 
	b = b * 12;
	a > b ? cout << "A bigger" : cout << "B bigger";
}