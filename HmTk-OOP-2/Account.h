#pragma once
class Account
{

	char SurName[20];
	int NumAcc;
	int PerAcc;
	int Amount;
	int choice;

public:
	Account(const char SurName[], int NumAcc, int PerAcc, int Amount);

	void ShowValues();
	
	void ShowActions();

	void SetNewName(const char name[]);

	void SetSubstMoney(int Amount);

	void SetAddMoney(int Amount);

	void AddPercent();

	void ChangeMoneytoDoll();

	void ChangeMoneytoEuro();

	int GetChoice();

};

