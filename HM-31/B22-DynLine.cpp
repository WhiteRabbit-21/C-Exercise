#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char *str = new char[30];
	cout << "Enter line: ";
	gets_s(str, 29);

	char *newstr = strchr(str, 33);
	cout << "New Line is: " << newstr << endl;

	delete[]str;
	delete[]newstr;
}