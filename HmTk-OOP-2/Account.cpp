#include "Account.h"
#include "Header.h"

Account::Account(const char SurName[], int NumAcc, int PerAcc, int Amount)
{
	strcpy_s(this->SurName, SurName);
	this->NumAcc = NumAcc;
	this->PerAcc = PerAcc;
	this->Amount = Amount;
}

void Account::ShowValues()
{
	cout << "Acount`s owner is: " << SurName << endl;
	cout << "Account`s number is: " << NumAcc << endl;
	cout << "Amount of money with Percent is: " << PerAcc << endl;
	cout << "Amount of money: " << Amount << endl;
}

void Account::ShowActions()
{
	cout << "\t Select the kind of operation" << endl;
	cout << "\t 1. Set New Owner for Account" << endl;
	cout << "\t 2. Withdraw money from Account" << endl;
	cout << "\t 3. Put money in Account" << endl;
	cout << "\t 4. Collect percents in Account" << endl;
	cout << "\t 5. Change money in Dollar" << endl;
	cout << "\t 6. Change money in Euro" << endl;	
}

void Account::SetNewName(const char name[])
{
	strcpy_s(this->SurName, name);
	//cout << "Acount`s owner is: " << this->SurName << endl;
}

void Account::SetSubstMoney(int Amount)
{
	this->Amount -= Amount;
	//cout << "Card balance: " << this->Amount << endl;

}

void Account::SetAddMoney(int Amount)
{
	this->Amount += Amount;
	//cout << "Card balance: " << this->Amount << endl;

}

void Account::AddPercent()
{
	this->Amount *= 1 + (PerAcc / 100.0);
	//cout << "Card balance with percents: " << this->Amount << endl;

}

void Account::ChangeMoneytoDoll()
{
	this->Amount /= 24.5;
	//cout << "Card balance in Dollar: " << this->Amount << endl;

}

void Account::ChangeMoneytoEuro()
{
	this->Amount /= 26.5;
	//cout << "Card balance in Euro: " << this->Amount << endl;

}

int Account::GetChoice()
{
	cout << "Entet the number of action: " << endl;
	cin >> choice;
	return choice;
}
