#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;
 
void PrintArray(int cnt, int Array[]) {
	for (int i = 0; i < cnt; i++) {
		cout << Array[i] << "\t";
    }
	cout << endl;
}

void Change(int cnt, int *Array)
{
	int point;  
	bool *NArrray = new bool[cnt]; 
	for (int j = 0; j < cnt; j++)   
		NArrray[j] = 0;

	for (int i = 0; i < cnt; i++)
	{
		point = rand() % cnt;    
		if (!NArrray[point])    
		{
			Array[point] = i + 1;    
			NArrray[point] = 1;  
		}
		else  
			i--;
	}
	delete[]NArrray;
}

bool Check(int cnt, int *Array) {
	bool tmp;
	for (int i = 0; i < cnt; i++) {
		for (int j = i; j >= 0; j--) {
			if (Array[i] != Array[j])
				tmp = 1;
			else
				tmp = 0;
		}
	}
	if (tmp == 1)
		return 1;
	else
		return 0;
}

int main()
{
	srand(time(0));
	
	int N;
	cout << "Enter N ";
	cin >> N;

	int *Array = new int[N];

	Change(N, Array);
	PrintArray(N, Array);
	cout << endl;
	cout<<Check(N, Array);

  /*Масив цілих чисел називається “перестановкою”, якщо він при розмірності N,
  містить числа від 1 до N, що не повторюються.Написати функцію для генерування “перестановок”.
  Написати функцію, яка визначає, чи є заданий масив “перестановкою”.*/
}
