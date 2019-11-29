#include <iostream>
using namespace std;

int main() {
	//9.	Задано три довільних числа. Знайти найбільше з них. Алгоритм має бути оптимальним.
	float a, b, c, res;
	cout << "Enter a,b,c";
	cin >> a >> b >> c;

	if (a > b) {
		if (a > c)
			res = a;
		else res = c;
	}
	else {
		if (b > c)
			res = b;
		else res = c;
	}
	cout << "Самое большое число" << res << endl;
	/* float a,b,c;
	cout<<"Enter a,b,c";
	cin>>a>>b>>c;
	if(a > b && a > c)
	  cout<<"a bigger"<<endl;
	  if(b > a && b > c)
		cout<<"b bigger";
	  else if(c > a && c > b)
		cout <<"c bigger" << endl;
	*/
}