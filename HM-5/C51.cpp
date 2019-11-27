#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter A: " << endl;
	 cin >> a;
	 bool u = (a % 3 == 0) || (a % 7 == 0) || (a % 11 == 0);
	 cout << "u: " << u << endl;
}


