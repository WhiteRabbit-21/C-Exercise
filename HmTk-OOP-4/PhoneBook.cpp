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

void PhoneBook::DeleteContact()
{
	this->Name = "\0";
	this->PhoneNum = "\0";
	this->MobNum = "\0";
	this->AddictiveInfo = "\0";
}

int PhoneBook::GetChoice()
{
	int choice;
	std::cout << "Enter the action: " << std::endl;
	std::cin >> choice;
	return choice;
}

void PhoneBook::ShowActions()
{
	std::cout << "case 1: Add Contact to Phone Book " << std::endl;
	std::cout << "case 2: Delete Contact from Phone Book " << std::endl;
	std::cout << "case 3: Show all Contact in the Phone Book " << std::endl;
	std::cout << "case 4: Find the Contact in the Phone Book " << std::endl;
	std::cout << "case 5: Write Phone Book in to file" << std::endl;
	std::cout << "case 6: Write from Phone Book to CLS" << std::endl;
	std::cout << "case 7: Stop the program " << std::endl;

	std::cout << std::endl;

}

bool PhoneBook::Check(std::string FindName)
{
	if (Name.find(FindName) != -1) {
		return true;
	}
	else
		return false;

}

void PhoneBook::WriteFile()
{
	setlocale(LC_ALL, "Russian");
	std::ofstream out;

	out.open("Hello.txt", std::ios::app); // окрываем файл для записи

	if (out.is_open())
	{
		out << " Name: " << Name << std::endl;
		out << " Phone Number: " << PhoneNum << std::endl;
		out << " Mobile Number: " << MobNum << std::endl;
		out << " AddictiveInfo: " << AddictiveInfo << std::endl;
		out << std::endl;
	}
	out.close();
}

void PhoneBook::ReadFromFile()
{
	std::string S;
	std::ifstream in("Hello.txt"); // окрываем файл для чтения
	if (in.is_open())
	{
		while (getline(in, ReadFile))
		{
			std::cout << ReadFile << std::endl;
		}
	}
	in.close();
}


