#include <iostream>
using namespace std;

int main() {
//1.	Користувач вводить чотиризначне число. "Обернути" число – поміняти місцями першу і четверту цифри, а також другу і третю. (Наприклад, було 1234, стало 4321). Якщо введено не чотиризначне число, то повідомити про помилку, інакше – вивести нове число. 
	int a;
  cout << "Enter 4 numbers";
  cin >> a;

  int f, s, t, f1;

  if (a > 999 && a < 10000) {
	  f = a / 1000;
	  s = (a % 1000) / 100;
	  t = ((a % 1000) % 100) / 10;
	  f1 = ((a % 1000) % 100) % 10;

	  f = f + f1;
	  f1 = f - f1;
	  f = f - f1;
	  s = s + t;
	  t = s - t;
	  s = s - t;
	  cout << f << s << t << f1 << endl;
  }
  else {
	  cout << "wrong number\n";
  }
 }
  