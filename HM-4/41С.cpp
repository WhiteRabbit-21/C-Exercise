#include <iostream>
using namespace std;

//41.	Обміняти значення трьох змінних A, B, C так, 
//щоб змінна A набула значення змінної B, а змінна B набула значення змінної C, а змінна C набула значення змінної A."

int main() {

	int a;
	int b;
	int c;
  
	cout << "Enter A: ";
	cin >> a;
  
	cout << "Enter B: ";
	cin >> b;
  
	cout << "Enter C: ";
	cin >> c;
  
	a = a + b;
	b = a - b;
	a = a - b;

	//cout << "a:" << a << endl;
	//cout << "b:" << b << endl;
  
	b = b + c;
	c = b - c;
	b = b - c;
	//cout << "b:" << b << endl;
	//cout << "c:" << c << endl;
  
	a = a + c;
	a = a - c;
	c = a - c;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
}