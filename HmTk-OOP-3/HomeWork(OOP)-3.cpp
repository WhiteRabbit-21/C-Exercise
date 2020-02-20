// HomeWork(OOP)-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Company.h"

int main()
{
	Company C[3] = {

		Company("\t Global Logic", "www.globallogic.com","San-Jose",2000,12000,9),
		Company("\t Epam", "www.epam.com","NewTown",1993,30000,23),
		Company("\t Luxoft", "www.luxoft.com ","Zug",2000,10000,10)
	};

	for (int i = 0; i < 3; i++) {
		C[i].ShowValues();
	}

	std::cout << std::endl;

	for (int i = 0; i < 3; i++) {
		if (C[i].GetCntEmp() > 10000) {
			C[i].ShowValues();
		}
	}
    
}
