#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//2.	Дано рядок. Чи розташовані його символи у алфавітному порядку ?

	char Text[100];
	cout << "Enter Line: ";
	gets_s(Text);

	bool res = true;

	for (int i = strlen(Text) - 1; i > -1; i--) {
		if (Text[i] < Text[i - 1]) {
			res = false;
		}
	}
	cout << "Res is: " << res << endl;

}