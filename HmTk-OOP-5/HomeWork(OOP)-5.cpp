
#include "Header.h"
#include "Worker.h"

int main()
{
	const int size = 5;
	Worker Arr[size] = {
		Worker("Alona L","CEO",2020,3000),
		Worker("Alex L","CTO",2019,2000),
		Worker("Ihor K","CIO",2016,1500),
		Worker("Lana S","CMM",2017,2100),
		Worker("Kyrylo P","CISO",2015,1600)
	};


	for (int i = 0; i < size; i++) {
		Arr[i].ShowValues();
	}
	std::cout << std::endl;

	int tmp;

	std::cout << "Enter amount Of years: " << std::endl;
	std::cin >> tmp;

	for (int i = 0; i < size; i++) {
		if (Arr[i].ListOfWOrkers(tmp) == true) {
			Arr[i].ShowValues();
		}
	}
	std::cout << std::endl;


	std::cout << "Enter Salaries: " << std::endl;
	std::cin >> tmp;
	std::cout << std::endl;

	for (int i = 0; i < size; i++) {
		if (Arr[i].CheckSalaries(tmp) == true) {
			Arr[i].ShowValues();
		}
	}
	std::cout << std::endl;

	std::string Post;

	std::cout << "Enter post: " << std::endl;
	std::cin >> Post;
	std::cout << std::endl;


	for (int i = 0; i < size; i++) {
		if (Arr[i].CheckPost(Post) == true) {
			Arr[i].ShowValues();
		}
	}
	std::cout << std::endl;



}