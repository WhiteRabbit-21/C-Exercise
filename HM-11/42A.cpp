#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter N";
	cin >> N;

	float x;
	cout << "Enter point";
	cin >> x;

	float h;
	cout << "Enter step";
	cin >> h;

	float y;

	for (int i = 1; i <= N; i++) {
		y = 10 / (x + 7);
		cout << " x" << i << ": " << x;
		cout << " y" << i << ": " << y << endl;
		x = x + h;
	}
}