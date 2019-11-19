#include "pch.h"
#include <iostream>
using namespace std;

/*12.	Написати функцію, де аргументом буде кількість повних секунд k, 
а результатами – кількість діб, годин, хвилин та секунд.*/
void cntDHMS(int sec, int *D, int *H, int *M, int *S) {
	
	*D = sec / 86400;
	
	*H = (sec % 86400) / 3600;
	
	*M = ((sec % 86400) % 3600) / 60;
	
	*S = ((sec % 86400) % 3600) % 60;
}

int main()
{
	int sec;
	cout << "Enter count of seconds: ";
	cin >> sec;

	int D, H, M, S;

	cntDHMS(sec,&D,&H,&M,&S);
	cout << D << " days, ";
	cout << H << " hours, ";
	cout << M << " minutes, ";
	cout << S << " seconds ";
}
