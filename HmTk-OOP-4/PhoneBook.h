#pragma once
#include "Header.h"

class PhoneBook {

	//PhoneBook *Arr[3];

	std::string Name;
	std::string PhoneNum;
	std::string MobNum;
	std::string AddictiveInfo;
	std::string ReadFile;

public:
	PhoneBook();
	PhoneBook(std::string Name, std::string PhoneNum, std::string MobNum, std::string AddictiveInfo);

	void ShowValues();
	void setValues(std::string _Name, std::string _PhoneNum, std::string _MobNum, std::string _AddictiveInfo);

	void AddContact();
	void DeleteContact();

	int GetChoice();
	void ShowActions();

	bool Check(std::string FindName);

	void WriteFile();
	void ReadFromFile();




	~PhoneBook();

};


