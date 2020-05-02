#pragma once
#include "Header.h"
class Product
{
	std::string Products_Name;
	float Price;

public:
	Product();
	Product(std::string Name, double Price);

	Product(const Product &Prdct);
	~Product();

	void DisplayValues();
	std::string GetName();
	
	double ChngPrc(double price);


};

