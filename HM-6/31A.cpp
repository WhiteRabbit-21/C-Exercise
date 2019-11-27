#include <iostream>
#include <math.h>
using namespace std;

int main() {

  double x;
  cout << "Enter x: " << endl;
  cin >> x;
  
  double y, z;
  if (x >= -1) {
	  y = 0.6 + sqrt(x + 5);
	  z = log10(2) + abs(x - 12);
  }
  else {
	  y = pow(5, x) + sin(x);
	  z = cos(x + 3);
  }
  cout << "y is: " << y << endl;
  cout << "z is: " << z << endl;
}
  