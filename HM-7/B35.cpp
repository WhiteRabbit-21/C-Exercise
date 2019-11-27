#include <iostream>
#include <math.h>
using namespace std;

int main() {
double const pi=3.1415926;

float p;
cout << "Enter P: " << endl;
cin >> p;

float l;
cout << "Enter L: " << endl;
cin >> l;

float a = p / 4;
float SS = a * a;
float R = l / (2 * pi);
float SR = pi * pow(R, 2);

if (SS > SR) {
	cout << "Area of square is bigger";
}
else if (SS = SR) {
	cout << "Area of ​​a circle is bigger";
}
else {
	cout << "Area`s of figure`s is equals" << endl;
}
    
    

}
