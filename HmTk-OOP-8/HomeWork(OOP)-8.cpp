#include "Header.h"
#include "Product.h"
#include "Catalog.h"

//Для закрепления темы "Агрегирование классов в С++"
//Вам предлагается разработать консольное приложение
//"GoodsCatalog" с применением агрегирования в классе
//Catalog динамического массива объектов класса Product.
//Следует реализовать полный набор обпераций по работе
//с таким классом(добавление и удаление товаров,
//	изменение цены товара, вывод списка товаров на экран)

int main()
{
	Catalog Mockup("Fruits");
	Mockup.AddProduct(Product("Apple", 15.0));
	Mockup.AddProduct(Product("Pineapple", 25.0));
	Mockup.AddProduct(Product("Banana", 20.0));
	Mockup.ShowValues();

	Mockup.DelProduct("Apple");
	Mockup.ShowValues();

	Mockup.ChangePrice("Banana", 30.0);
	Mockup.ShowValues();

}

