#include <iostream>
#include <math.h>
using namespace std;

int main() {
  // 2.	Написати програму, яка приймає дробове число – кількість годин, а повертає кількість годин хвилин та секунд. Приклад: користувач вводить 4.89, програма виводить 4 години 53 хвилини 2 секунди.

	 
  float SS, o, j, u, y, r;
  
  float Time;
  cout << "Enter Time: ";
  cin >> Time;

  int Hours;
  int minutes;
  int seconds;

  Hours = Time / 1;
  
  SS = Time - Hours;
  
  o = 100.0 / 60;
  
  j = SS / o;
  
  u = round(j * 100) / 100;
  
  minutes = u * 100;
 
  y = round((j - u) * 1000) / 1000;

  r = round((y / o) * 1000) / 1000;
 
  seconds = r * 1000;

  cout << "time is: " << Hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
}
  