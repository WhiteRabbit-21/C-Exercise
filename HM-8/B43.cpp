#include <iostream>
#include <math.h>
using namespace std;



int main()
{
	float x;
	cout << "Enter x";
    cin >> x;

  float y;

  if (x > 4) {
	  y = log(x - sqrt(3)) + 0.04;
  }
  else if (1 <= x && x <= 4) {
	 y = pow(0.2*x + 4.53 + 1 / (x + 1), 2);
  }
  else {
	  y = sqrt(abs(x) + 5);
  }
  cout << "Y= " << y << endl;
}