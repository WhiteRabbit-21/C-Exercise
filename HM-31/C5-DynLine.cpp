#include "pch.h"
#include <iostream>
using namespace std;         
/*5 Написати програму, що імітує вхід в систему та запитує логін і пароль. 
	Має бути щонайменше 4 «користувачі» і в кожного свій пароль. 
	Якщо пароль вірний, то програма має вивести повідомлення «Welcome, login!» (
	де login – відповідний користувач). Якщо пароль неправильний, 
	то випадає відповідне повідомлення і програма пропонує ввести дані знову. 
	Після третьої помилки програма виводить повідомлення «Ліміт спроб вичерпано» і завершує роботу.*/

int main()
{
	char login[][30] = { "User1","User2","User3","User4" };
	char pass[][30] = { "Cat","Dog","Rat","Dragon" };
	int i = 0;
	char User[20];
	char Password[20];
	cout << "Enter User: ";
	gets_s(User, 20);
	if (strcmp(User, login[0]) == 0) {
		cout << "Enter a password User1: ";
		while (true) {
			gets_s(Password, 20);
			if (strcmp(Password, pass[0]) == 0) {
				cout << "Welcome, User1!" << endl;
				break;
			}
			else {
				if (i == 3) {
					cout << "Yo`re limit reached" << endl;
					break;
				}
				cout << "Password incorrect, Try again: ";
				i++;
			}
		}
	}
	else if (strcmp(User, login[1]) == 0) {
		cout << "Enter a password User2: ";
		while (true) {
			gets_s(Password, 20);
			if (strcmp(Password, pass[1]) == 0) {
				cout << "Welcome, User2!" << endl;
				break;
			}
			else {
				if (i == 3) {
					cout << "Yo`re limit reached" << endl;
					break;
				}
				cout << "Password incorrect, Try again ";
				i++;
			}
		}
	}
	else if (strcmp(User, login[2]) == 0) {
		cout << "Enter a password User3: ";
		while (true) {
			gets_s(Password, 20);
			if (strcmp(Password, pass[2]) == 0) {
				cout << "Welcome, User3!" << endl;
				break;
			}
			else {
				if (i == 3) {
					cout << "Yo`re limit reached" << endl;
					break;
				}
				cout << "Password incorrect, Try again ";
				i++;
			}
		}
	}
	else if (strcmp(User, login[3]) == 0) {
		cout << "Enter a password User4: ";
		while (true) {
			gets_s(Password, 20);
			if (strcmp(Password, pass[3]) == 0) {
				cout << "Welcome, User4!" << endl;
				break;
			}
			else {
				if (i == 3) {
					cout << "Yo`re limit reached" << endl;
					break;
				}
				cout << "Password incorrect, Try again ";
				i++;
			}
		}
	}
	else
		cout << "User not found";
}
