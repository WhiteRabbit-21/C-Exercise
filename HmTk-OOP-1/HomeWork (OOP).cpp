// HomeWork (OOP).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Fraction.h"
#include "Actions.h"
using namespace std;

int main()
{
	Fraction F;
	Fraction G;
	Actions D;

	double res;
	bool ask = true;
	do {
		D.ShowMenu();
		switch (D.GetChoice()) {
		case 1:
			cout << D.AddFrac(G.GetValuesDen(), G.GetValuesNum(), F.GetValuesDen(), F.GetValuesNum()) << endl;
			break;
		case 2:
			cout << D.SubsFrac(G.GetValuesDen(), G.GetValuesNum(), F.GetValuesDen(), F.GetValuesNum()) << endl;
			break;
		case 3:
			cout << D.MultFrac(G.GetValuesDen(), G.GetValuesNum(), F.GetValuesDen(), F.GetValuesNum()) << endl;
			break;
		case 4:
			cout << D.DiviFrac(G.GetValuesDen(), G.GetValuesNum(), F.GetValuesDen(), F.GetValuesNum()) << endl;
			break;
		default:
			cout << "You`r input incorrect" << endl;
			break;
		}
		cout << "Do you want to continue? (1-yes/0-no)";
		cin >> ask;

		system("cls");
	} while (ask);


}

