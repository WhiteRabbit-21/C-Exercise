#include <iostream>
#include <math.h>
using namespace std;

//81.	Дано трьохзначне натуральне число А. Чи складається А з різних цифр ?

int main() {
    
	int z;
	cout << "three-digit number: ";
	cin >> z;
	
	int a = z / 100;
    
	int b = (z / 10) % 10;
   
	int c = (z % 100) % 10;і
    
	bool u = (a != b) && (b != c) && (c != a);
	cout << "u:" << u << endl;




    
    
}


