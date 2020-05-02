#pragma once
#include "Product.h"
#include "Header.h"

class Catalog
{
	std::string Name;
	Product *Arr;
	int cnt;

public:
	Catalog();
	Catalog(std::string name);
	Catalog(const Catalog &Ctg);
	~Catalog();

	void ShowValues();
	
	void AddProduct(const Product &Prdct);
	void DelProduct(std::string NamePrdct);

	void ChangePrice(std::string NamePrdct, double Price);


};

