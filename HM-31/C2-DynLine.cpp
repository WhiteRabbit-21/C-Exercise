#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//2.	Написати функцію, яка приймає рядок і замінює в ньому кожну крапку трьома крапками “…”.

void Change (char s[]) {
	char  *res= new char[100];
	int j = 0;
	for (int i = 0; i<strlen(s); i++) //.1
	{
		if (s[i] == '.') 
		{
			res[j++] = s[i];//result[0]='.'
			res[j++] = s[i];//result[1]='.'
		}
		res[j++] = s[i]; //result[2]='.' //result[3]='1'
	}
	
	res[j] = '\0';
    cout << res;
}

int main()
{
	char *str = new char[50];
	cout << "Enter Line: ";
	gets_s(str, 50);

	Change(str);
	delete[]str;
}
