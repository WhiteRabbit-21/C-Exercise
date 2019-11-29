#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A;
	cout << "\n Enter A: ";
	cin >> A;

	int B;
	cout << "\n Enter B: ";
	cin >> B;

	int C;
	cout << "\n Enter C: ";
	cin >> C;

	int D;
	cout << "\n Enter D: ";
	cin >> D;
	
	int max = A;
	if(max < B) max = B;
	if(max < C) max = C;
	if(max < D) max = D;
	
	cout << "\n Result = " << max;
}
