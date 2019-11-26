#include <iostream>
#include <math.h>
using namespace std;

int main() {
 
  float x;
  cout << "Enter x";
  cin >> x;

  float y;
  cout << "Enter y";
  cin >> y;

  float PF1;
  PF1 = sqrt(y + 2);

  float PF2;
  PF2 = 3 + (2 / x) + (2 / pow(x, 2));
          
  float Func;
  Func= pow(PF2, PF1) + log10(pow(x, 2)) / pow(PF2, PF1) - pow(5 + 4 * x + 3 * pow(x, 2) + 2 * (x, 3), 3 / x);
  cout << "f(x,y): " << Func << endl;

  
}