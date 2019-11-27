#include <iostream>
using namespace std;

int main() {
	int gaz = 300;
	int kam = 500;
	int fine = 100;
	int salaries;
	
	
	int kzk;
	cout << "Enter quantity order for Kamaz: ";
	cin >> kzk;

	int kzz;
	cout << "Enter quantity orders for Gazel: ";
	cin >> kzz;
	
	int kf;
	cout << "Enter quantity of faults: ";
	cin >> kf;


	if (kf == 0) {
		salaries = (kam*kzk + gaz * kzz) + 1000;
	}
	else {
		salaries = (kam*kzk + gaz * kzz) - kf * fine;
	}
	cout << "salaries is " << salaries;
  }
