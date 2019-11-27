#include <iostream>
#include <math.h>
using namespace std;

int main() {
  //6.	Задано розміри прямокутного отвору зі сторонами А і В. Чи можна протягнути через даний отвір кулю з радіусом R ?
  float a;
  cout << "Enter A: " << endl;
  cin >> a;

  float b;
  cout << "Enter B: " << endl;
  cin >> b;

  float R;
  cout << "Enter R: " << endl;
  cin >> R;

  float d;
  d = R * 2;

  bool u = (a >= d) && (b >= d);
  cout << "u:" << u << endl;
 
}