#include "pch.h"
#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

struct Robot {
	int x = 0;
	int y = 0;

	void Up() {
		y++;
		cout << "took a step to the Up" << endl;
	}

	void Down() {
		y--;
		cout << "took a step to the Down" << endl;
	}

	void Left() {
		x--;
		cout << "took a step to the Left" << endl;
	}

	void Right() {
		x++;
		cout << "took a step to the Right" << endl;
	}

	void Stay() {
		cout << "Stay in Place" << endl;
	}

	void Escape() {
		cout << "x: " << x << "\ty: " << y << endl;
		return;
	}

	void Random() {
		int tmp = rand() % 4;
		if (tmp == 0)
			x++;
		else
			if (tmp == 1)
				y--;
			else
				if (tmp == 2)
					x--;
				else
					y++;
		cout << "Random Step " << endl;
	}

	void Info() {
		cout << "x: " << x << "\t y: " << y << endl;
	}

	void Und(int key) {
		if (key == 0)
			return;
		cout << " Code Key " << key;
		cout << " - Unknown key " << endl;
	}
};

void ExtArr(int &N, int *&ArrayX, int *&ArrayY) {
	int *ArrX = new int[N + 1];
	int *ArrY = new int[N + 1];
	for (int i = 0; i < N; i++) {
		ArrX[i] = ArrayX[i];
	}
	for (int i = 0; i < N; i++) {
		ArrY[i] = ArrayY[i];
	}
	N++;
	delete[] ArrayX;
	delete[] ArrayY;
	ArrayX = ArrX;
	ArrayY = ArrY;
}

void PrintArr(int N, int*ArrayX, int *ArrayY) {
	cout << endl;
	cout << "Array x is: " << endl;
	for (int i = 0; i < N; i++) {
		cout << ArrayX[i] << "  ";
	}
	cout << endl;
	cout << "Array y is: " << endl;
	for (int i = 0; i < N; i++) {
		cout << ArrayY[i] << "  ";
	}
	cout << endl;
}
/*Реалізувати структуру «Робот», з двома полями - координатами у Декартовій системі та полем - унікальним номером робота.За замовчуванням, він стартує з точки(0, 0).
Реалізувати методи, які дозволяють роботу рухатися з кроком довжиною А у вибраному напрямку : А – цілочисельний параметр для методів руху.
Робот через консольне меню має виконувати наступні команди :
W – крок вгору,
D – крок праворуч,
S – крок вниз,
A – крок ліворуч.
P – повідомити поточні координати,
Escape – повідомити координати, де він зараз знаходиться і завершити роботу.
Z – крок у випадковому напрямку.
Q – лишатися на місці,
Enter — повідомити координати(аналогічно Р).
В функції main на кожному кроці записувати координати робота у лінійний масив. Вивести наприкінці програми шлях робота на екран.
Вивести точки, де робот побував понад один раз.*/

int main()
{
	srand(time(0));

	cout << "Enter key: " << endl;
	cout << "W - Step UP" << endl;
	cout << "D – Step Right" << endl;
	cout << "S – Step Down" << endl;
	cout << "A – Step Left" << endl;
	cout << "P – Info" << endl;
	cout << "Escape – Info & Finish" << endl;
	cout << "Z – Rand Step" << endl;
	cout << "Q – Stay at place" << endl;
	cout << "Enter - Info" << endl;

	Robot A;
	int p = 0;
	int z = 0;
	int *X = new int[p];
	int *Y = new int[z];
	int Key;
	int cnt = 0;
	do {

		Key = _getch();
		switch (Key) {
		case 13: A.Info(); break;
		case 27: A.Escape(); break;
		case 97: A.Left();
			ExtArr(cnt, X, Y);
			X[cnt - 1] = A.x;
			Y[cnt - 1] = A.y;
			break;
		case 100: A.Right();
			ExtArr(cnt, X, Y);
			X[cnt - 1] = A.x;
			Y[cnt - 1] = A.y;
			break;
		case 112: A.Info(); break;
		case 113: A.Stay(); break;
		case 115: A.Down();
			ExtArr(cnt, X, Y);
			X[cnt - 1] = A.x;
			Y[cnt - 1] = A.y;
			break;
		case 119: A.Up();
			ExtArr(cnt, X, Y);
			X[cnt - 1] = A.x;
			Y[cnt - 1] = A.y;
			break;
		case 122: A.Random();
			ExtArr(cnt, X, Y);
			X[cnt - 1] = A.x;
			Y[cnt - 1] = A.y;
			break;
		default: A.Und(Key);
		}
	} while (Key != 27);

	PrintArr(cnt, X, Y);
	cout << "Points" << endl;
	
	delete[]X;
	delete[]Y;
}
