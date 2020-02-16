

#include <iostream>
#include "Header.h"
#include "Account.h"


int main()
{
	Account A("Lon", 25, 12, 5000);

	char NewName[20];
	int tmp;
	bool ask = true;
	do {
		A.ShowActions();

		switch (A.GetChoice()) {
		case 1:
			cin.ignore();

			cout << "Enter new owner: " << endl;
			gets_s(NewName, 20);
			A.SetNewName(NewName);

			A.ShowValues();

			break;
		case 2:

			cout << "Enter amount of money for withdraw: " << endl;
			cin >> tmp;
			A.SetSubstMoney(tmp);

			A.ShowValues();

			break;
		case 3:

			cout << "Enter amount of money for input: " << endl;
			cin >> tmp;
			A.SetAddMoney(tmp);

			A.ShowValues();
			break;
		case 4:

			A.AddPercent();
			A.ShowValues();
			break;

		case 5:

			A.ChangeMoneytoDoll();
			A.ShowValues();
			break;

		case 6:

			A.ChangeMoneytoEuro();
			A.ShowValues();
			break;

		default:
			cout << "You`:re input is incorrect, try again" << endl;
			break;
		}

		cout << "Do you want to continue? (1-yes/0-no)";
		cin >> ask;

		system("cls");
	} while (ask);





}
