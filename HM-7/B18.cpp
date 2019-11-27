#include <iostream>
#include <math.h>
using namespace std;

int main() {

  float x;
  cout << "Enter x: ";
  cin >> x;

  float y;
  
  if ((x != 1) && (x != -1) && (x != sqrt(2)) && (x != -sqrt(2))) {
	  y = (x + 1) / ((pow(x, 2) - 1)*(pow(x, 2) - 2));
	  cout << "y=" << y << endl;
  }
  else {
	  cout << "Example has no solution" << endl;
  }
  
}