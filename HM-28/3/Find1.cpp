#include "pch.h"
#include <iostream>
#include "LibArray.h"
using namespace std;


int main()
{
	int N;
	cout << "Enter N";
	cin >> N;

	int T;
	cout << "Enter T";
	cin >> T;

	int *Array = new int[N];

	RandArray(N, Array);
	PrintArray(N, Array);
	cout << Find(N, Array, T) << endl;
}
