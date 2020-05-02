#include "Product.h"

Product::Product()
{
}

Product::Product(std::string _name, double _price) :Products_Name(_name), Price(_price)
{
}



Product::Product(const Product & Prdct) :Products_Name(Prdct.Products_Name), Price(Prdct.Price)
{

}

Product::~Product()
{
}

void Product::DisplayValues()
{
	std::cout << "Product is: " << Products_Name << "\t Price of Product is: " << Price << std::endl;
}

std::string Product::GetName()
{
	return Products_Name;
}

double Product::ChngPrc(double price)
{
	Price = price;
	return Price;
}


