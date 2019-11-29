#include <iostream>
using namespace std;


int main() {
  //Заповнити лінійний масив N числами у відповідності із заданим правилом:
//41.	значеннями виразу h/(h+1), де h – індекс елемента;

  int N;
  cout << "Enter N";
  cin >> N;
  
  float arr[N];
  
 
  for (int i = 0; i < N; i++) {
	  arr[i] = i / (i + 1.0);
  }

  for (int i = 0; i < N; i++) {
	  cout << arr[i] << endl;
  }

}