#include "Catalog.h"

Catalog::Catalog(): Name("-")
{
	cnt = 0;
	Arr = nullptr;
}

Catalog::Catalog(std::string _name) :Name(_name)
{
	cnt = 0;
	Arr = nullptr;
}

Catalog::Catalog(const Catalog & Ctg) :Name(Ctg.Name)
{
	cnt = Ctg.cnt;
	Arr = new Product[cnt];

	for (int i = 0; i < cnt; i++) {
		Arr[i] = Ctg.Arr[i];
	}
}

Catalog::~Catalog()
{
	if (Arr != nullptr) {
		delete[] Arr;
		Arr = nullptr;
		cnt = 0;
	}
}

void Catalog::ShowValues()
{
	std::cout << "Catalog: " << Name << std::endl;
	if (cnt == 0) {
		std::cout << "Catalog is empty!" << std::endl;
	}
	else {
		for (int i = 0; i < cnt; i++) {
			Arr[i].DisplayValues();
		}
		std::cout << std::endl;
	}
}

void Catalog::AddProduct(const Product & Prdct)
{
	Product *buff = new Product[cnt];
	for (int i = 0; i < cnt; i++) {
		buff[i] = Arr[i];
	}

	delete[] Arr;
	Arr = new Product[cnt + 1]; 

	for (int i = 0; i < cnt; i++) {
		Arr[i] = buff[i];
	}

	Arr[cnt] = Prdct;
	cnt++;
	delete[]buff;

}

void Catalog::DelProduct(std::string NamePrdct)
{
	int tmp = 0;
	for (int i = 0; i < cnt; i++) {
		if (Arr[i].GetName() == NamePrdct) {
			tmp = i;
		}
		break;
	}

	for (int i = tmp; i < cnt - 1; i++) {
		Arr[i] = Arr[i + 1];
	}

	Product *buff = new Product[cnt - 1];
	for (int i = 0; i < cnt - 1; i++) {
		buff[i] = Arr[i];
	}

	delete[] Arr;
	Arr = new Product[cnt - 1];

	for (int i = 0; i < cnt - 1; i++) {
		Arr[i] = buff[i];
	}

	cnt--;
	delete[] buff;
}

void Catalog::ChangePrice(std::string NamePrdct, double price)
{
	for (int i = 0; i < cnt; i++) {
		if (Arr[i].GetName() == NamePrdct) {
			Arr[i].ChngPrc(price);
		}
	}
}
