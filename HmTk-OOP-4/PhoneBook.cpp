#include "PhoneBook.h"

PhoneBook::PhoneBook()
{

}
PhoneBook::PhoneBook(std::string _Name, std::string _PhoneNum, std::string _MobNum, std::string _AddictiveInfo)
	:Name(_Name), PhoneNum(_PhoneNum), MobNum(_MobNum), AddictiveInfo(_AddictiveInfo)
{
}

void PhoneBook::ShowValues()
{
	std::cout << "Name is: " << Name << std::endl;
	std::cout << "Phone Number is: " << PhoneNum << std::endl;
	std::cout << "Mobile Number: " << MobNum << std::endl;
	std::cout << "Addictive Information: " << AddictiveInfo << std::endl;
	std::cout << std::endl;

}

PhoneBook::~PhoneBook()
{
	//delete Arr[];
}

void PhoneBook::setValues(std::string _Name, std::string _PhoneNum, std::string _MobNum, std::string _AddictiveInfo)
{
	this->Name = _Name;
	this->PhoneNum = _PhoneNum;
	this->MobNum = _MobNum;
	this->AddictiveInfo = _AddictiveInfo;

}

void PhoneBook::AddContact()
{
	std::cout << "Enter Name: ";
	std::cin >> this->Name;
	
	std::cout << "Enter Phone Number: ";
	std::cin >> this->PhoneNum;

	std::cout << "Enter Mobile Number: ";
	std::cin >> this->MobNum;

	std::cout << "Enter Addictive Information: ";
	std::cin >> this->AddictiveInfo;

	std::cout << std::endl;

}




