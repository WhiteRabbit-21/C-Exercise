#include "Company.h"

Company::Company()
{
}

Company::Company(std::string _name, std::string _hostName,
	std::string _adress, int _cntYearStay, int _cntEmploy, int _cntBranch) :
	Name(_name),HostName(_hostName),Adress(_adress),CntYearStay(_cntYearStay),
	CntEmploy(_cntEmploy),CntBranch(_cntBranch)
{
}

void Company::ShowValues()
{
	std::cout << "Name of company: " << Name << std::endl;
	std::cout << "Website: " << HostName << std::endl;
	std::cout << "Adress: : " << Adress << std::endl;
	std::cout << "Work on marketplace sience: " << CntYearStay << std::endl;
	std::cout << "Amount employeers: " << CntEmploy << std::endl;
	std::cout << "Amount of branches: " << CntBranch << std::endl;
	std::cout << std::endl;




}

int Company::GetCntEmp()
{
	return CntEmploy;
}
