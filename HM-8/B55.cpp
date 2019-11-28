#include <iostream>
using namespace std;

int main() {
  enum num { rat, cow, tiger, hare, dragon, snake, horse, sheep, monkey, ckiken, dog, pig };
    
  int num;
  cout << "Enter year";
  cin >> num;

  int tmp = (num - 1984) % 12;

  switch(tmp)
  {
  case rat: cout << "rat"; break;
  case cow: cout << "cow"; break;
  case tiger: cout << "tiger"; break;
  case hare: cout << "hare"; break;
  case dragon: cout << "dragon"; break;
  case snake: cout << "snake"; break;
  case horse: cout << "horse"; break;
  case sheep: cout << "sheep"; break;
  case monkey: cout << "monkey"; break;
  case ckiken: cout << "ckiken"; break;
  case dog: cout << "dog"; break;
  case pig: cout << "pig"; break;
  default: cout << "Year don`t find"; break;
  }
  

}
