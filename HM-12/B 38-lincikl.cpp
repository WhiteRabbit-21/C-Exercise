#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double X;
	cout << "\n Enter X: ";
	cin >> X;

    double N;
	cout << "\n Enter N: ";
	cin >> N;

	double K;
	cout << "\n Enter K: ";
	cin >> K;

	double M;
	cout << "\n Enter M: ";
	cin >> M;

	double A;
	int i = 1;
	double sum = 0;
	double dob = 1;

	while(i <= N){
        A = -1 * sin(pow(X, i));
        if (i != K && i != M){
        sum += A;
        dob *= A;
        }
        i++;
	}
	cout << "Suma = " << sum << "\n\nDobutok = " << dob;
}
