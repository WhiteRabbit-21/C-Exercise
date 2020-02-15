#pragma once
class Actions
{
	int choice;
public:
	void ShowMenu();
	int GetChoice();
	double MultFrac(double Denom2, double Num2, double Denom1, double Num1);
	double AddFrac(double Denom2, double Num2, double Denom1, double Num1);
	double SubsFrac(double Denom2, double Num2, double Denom1, double Num1);
	double DiviFrac(double Denom2, double Num2, double Denom1, double Num1);
	
};

