#pragma once
#include "Header.h"

class Worker
{
	std::string Name;
	std::string Post;
	int Receipts;
	int Salaries;
public:
	Worker();
	Worker(std::string Name, std::string Post, int Receipts, int Salaries);

	void ShowValues();

	bool ListOfWOrkers(int CntYears);
	bool CheckSalaries(int Sal);
	bool CheckPost(std::string Post);

	~Worker();

};

