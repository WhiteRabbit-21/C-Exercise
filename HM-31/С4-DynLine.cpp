#include "pch.h"
#include <iostream>
using namespace std;

bool isnum(char a) { return '0' <= a && a <= '9'; }

int CWords(char str[]) {
	int cnt=0;
	char *end;
	while (*str != '\0'){
		if (isnum(*str) == 1) {
			while (isnum(*str) == 1) {
				str++;
			}
			cnt++;
		}
		str++;
	}
	return cnt;
}
/*int CWords(char *str)
{
	int cnt = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (isdigit(str[i]))
		{
			cnt++;
			while (isdigit(str[i]))
				i++;
		}
	}
	return cnt;
}*/


	/*4.	Написати функцію, яка приймає рядок, що складається зі слів,
		чисел та пробілів між ними.Функція має підраховувати кількість чисел у рядку.*/
int main(){
	char *str = new char[50];
	cout << "Enter Line ";
	gets_s(str, 50);

	cout<<CWords(str);
	delete [] str;

}