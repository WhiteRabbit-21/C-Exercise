#include "pch.h"
#include <iostream>
using namespace std;

/*3.	Написати функцію, яка приймає два параметри:
	А футів і В дюймів, а повертає цю довжину у сантиметрах.*/
float func(float feet, float inc) {

	return (feet*30.48) + (inc*2.54);
 }

int main()
{   
	float feet;
	cout << "Enter feet";
	cin >> feet;

	float inc;
	cout << "Enter inc";
	cin >> inc;

	float res= func(feet, inc);
	cout << "quantity of centimetres is " << res;
}