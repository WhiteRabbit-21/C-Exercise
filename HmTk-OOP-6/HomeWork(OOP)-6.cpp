#include "Header.h"
#include "Fraction.h"

/*Вам предстоит применить перегрузку операторов для создания калькулятора дробей.//
Сначала создайте класс, представляющий обыкновенную дробь - Fraction.
В этом классе необходимо предусмотреть соответствующие целочисленные поля : числитель, знаменатель, целая часть числа.
Перегрузке подлежат операторы сложения, вычитания, умножения и деления.
Исходные данные для вычислений должны вводиться с консоли.
Для выбора операций задействуйте консольное меню.
Результат должен быть представлен в виде правильной несократимой дроби.
Для сокращения дроби следует определить в классе Fraction отдельный метод reduce() c использованием алгоритма Эвклида.
Успешного решения!*/

int main()
{ 
	Fraction A;
	Fraction B;
	Fraction Res;

	A.SetValues();
	B.SetValues();

	A.ShowMenu();
	switch (A.ReturnOperator())
	{
	case '+': 	
		Res = A + B;
		Res.Reduce();
		Res.ShowValues();
		break;
	case '-':
		Res = A - B;
		Res.Reduce();
		Res.ShowValues();
		break;
	case '*':
		Res = A * B;
		Res.Reduce();
		Res.ShowValues();
		break;
	case '/':
		Res = A / B;
		Res.Reduce();
		Res.ShowValues();
		break;
	default:
		std::cout << "This operator not found! " << std::endl;
	}

}
