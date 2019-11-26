#include <iostream>
#include <math.h>
using namespace std;

//13.	Задано катети прямокутного трикутника A і B. На скільки збільшиться гіпотенуза, якщо катет A збільшити на 30 % ?;
  //c^2=a^2+b^2

int main() {
  
	float a; 
	cout << "Enter A: ";
	cin >> a;
  
	float b;
	cout << "Enter B: ";
	cin >> b;

	float c;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "c:" << c << endl;
	
	a = a * 1.3;

	float c1;
	c1 = sqrt(pow(a, 2) + pow(b, 2));
	cout << "new c: " << c1 << endl;

	float dif;
	dif = c1 - c;
	cout << "increase on: " << dif << endl;
}