#include "pch.h"
#include <iostream>
using namespace std;
 
bool func(float A, float B, float x, float y, float z) {
	return (A > x&&B > y) || (A > y&&B > x) || (A > y&&A > z) || (A > z&&A > y) || (A > x&&A > y) || (A > y&&A > x);
}


int main()
{
	/*6.	Задано розміри прямокутного отвору зі сторонами А і В.
	Чи можна протягнути через даний отвір цеглину з розмірами x, y та z? */
	float A;
	cout << "Enter A ";
	cin >> A;

	float B;
	cout << "Enter B ";
	cin >> B;

	float x;
	cout << "Enter x ";
	cin >> x;

	float y;
	cout << "Enter y ";
	cin >> y;

	float z;
	cout << "Enter z ";
	cin >> z;

	bool res = func(A, B, x, y, z);
	cout << " " << res;

}
