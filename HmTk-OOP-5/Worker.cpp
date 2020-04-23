#include "Worker.h"

Worker::Worker()
{

}

Worker::Worker(std::string _Name, std::string _Post, int _Receipts, int _Salaries):
	Name(_Name),Post(_Post),Receipts(_Receipts),Salaries(_Salaries)
{

}

void Worker::ShowValues()
{
	std::cout << "Name of employee: " << Name << std::endl;
	std::cout << "Employeer`s post: " << Post << std::endl;
	std::cout << "Time of employee`rs receipts: " << Receipts << std::endl;
	std::cout << "Employeer`s salaries: " << Salaries << std::endl;
	std::cout << std::endl;
}

bool Worker::ListOfWOrkers(int CntYears)
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	int tmp = st.wYear;
	
	if (tmp - Receipts > CntYears) {
		return true;
	}

	return false;
}

bool Worker::CheckSalaries(int Sal)
{ 
	return (Salaries > Sal) ?  true : false;
}

bool Worker::CheckPost(std::string _Post)
{
	return (Post == _Post) ? true : false; 
}

Worker::~Worker()
{
}
