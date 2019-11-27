#include <iostream>
using namespace std;

int main() {
  //1.	За зміну у робочий день працівник отримує 400 грн., а за зміну у вихідний чи святковий день – 700 грн. Якщо працівник за місяць відпрацював 20 змін і більше, йому нараховується премія в 1000 грн. Підрахувати зарплату.
	int salW = 400;
	int salH = 700;
	int sal1;
	
	int WD;
	cout << "Enter quantity of WeekDays" << endl;
	cin >> WD;

	int HD;
	cout << "Enter quantity of HoliDays: " << endl;
	cin >> HD;

	if (HD + WD >= 20) {
		sal1 = salW * WD + salH * HD + 1000;
	}
	else {
		sal1 = salW * WD + salH * HD;
	}
	cout << "salaries IS:" << sal1 << endl;
}