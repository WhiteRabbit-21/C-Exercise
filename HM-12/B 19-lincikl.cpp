#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double N;
	cout << "\n Enter N: ";
	cin >> N;

	double A1 = pow(3.0, 4.0 / 3.0) + pow(2.0, 3.0 / 4.0);
    double A2 = A1 + log(exp(2.0) + 1) / log(2.0);
	int i = 2;
	double A3;
	double sum = 0;
	double dob = 1;

	while(i <= N){
        A3 = 2.0 * log(5 + A2 + log((1 + i) / (3.0 * A1)) / log(4.0)) / log(3.0);
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
A1 = pow(3, 4 / 3) + pow(2, 3 / 4);
A2 = A1 + log(exp(2) + 1) / log(2);
sum = 0;
dob = 1;

do{
        A3 = 2.0 * log(5 + A2 + log((1 + i) / (3.0 * A1)) / log(4.0)) / log(3.0);
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
