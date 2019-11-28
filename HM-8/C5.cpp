#include <iostream>
#include <math.h>
using namespace std;

int main() {
  //5.	Задано два кола  однакового радіусу з центрами у початку координат і у заданій точці(х,у), яка не співпадає з початком координат. Визначити кількість спільних точок цих кіл.
	
	float x1 = 0;
	float y1 = 0;
	float z;

	float x;
	cout<<"Enter x: ";
	cin >> x;

  float y;
  cout << "Enter y: ";
  cin >> y;

  float R;
  cout << "Enter R: ";
  cin >> R;

  z = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
  cout << z << endl;

  if (z > R + R) {
	  cout << "Два кола не перетинаються, тобто не мають спільних точок" << endl;
  }
  else if (z = R + R) { //О1O2 = r1 + r2
	  cout << "Два кола мають одну спільну точку" << endl;
  }
  else {
	  cout << "Мають дві спільні точки" << endl;
  }
}