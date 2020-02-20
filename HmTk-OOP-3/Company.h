#pragma once
#include "Header.h"

class Company
{
	std::string Name;
	std::string HostName;
	std::string Adress;
	int CntYearStay;
	int CntEmploy;
	int CntBranch;

public:
	Company();
	Company(std::string Name, std::string HostName, std::string Adress, int CntYearStay, int CntEmploy, int CntBranch);
	void ShowValues();
	int GetCntEmp();



};

