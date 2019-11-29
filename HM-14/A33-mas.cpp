#include <iostream>
using namespace std;


int main() {
  //33.	кратних трьом(елементи масиву є цілими числами);
  int N;
  cout << "Enter N";
  cin >> N;
  
  int arr[N];
  int cnt = 0;
 
  for (int i = 0; i < N; i++) {
	  cout << "Enter elem of arr: ";
	  cin >> arr[i];
  }

  for (int i = 0; i < N; i++) {
	  if (arr[i] % 3 == 0) {}
	  cnt++;
  }
  

  for (int i = 0; i < N; i++) {
	  cout << arr[i] << endl;
  }
  cout << "\t" << cnt << endl;
}