#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    double N;
	cout << "\n Enter N: ";
	cin >> N;

	double A1 = tan(sqrt(3) - sqrt(2));
	double A2 = exp(3) - exp(2);
	int i = 2;
	double A3;
	double sum = 0;
	double dob = 1;

	while(i <= N){
        A3 = pow(2 * A2 - A1 - 4e-3, 2) / log(4.61 * abs(A2 + A1));
        sum += A3;
        dob *= A3;
        A1 = A2;
        A2 = A3;
         if (i == N - 1)
            cout << "Suma N - 1 = " << sum << endl << "Dobutok N - 1 = " << dob << endl << endl;
        i++;
        }
cout << "Suma N = " << sum << endl << "Dobutok = " << dob << endl << endl;

cout << "----------------------";

i = 2;
A1 = tan(sqrt(3) - sqrt(2));
A2 = exp(3) - exp(2);
sum = 0;
dob = 1;

do{
        A3 = pow(2 * A2 - A1 - 4e-3, 2) / log(4.61 * abs(A2 + A1));
        sum += A3;
        dob *= A3;
        A1 = A2;
        A2 = A3;
         if (i == N - 1)
            cout << "\n Suma N - 1 = " << sum << endl << "Dobutok N - 1 = " << dob << endl << endl;
        i++;
}
    while(i <= N);
    cout << "Suma N = " << sum << endl << "Dobutok = " << dob << endl;
}
