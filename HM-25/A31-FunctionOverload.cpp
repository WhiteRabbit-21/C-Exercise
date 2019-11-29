#include <iostream>
using namespace std;
//31.	Реалізувати три перегрузки функції "Квадрат числа" з цілим, довгим цілим і дійсним параметрами, які б знаходили квадрат числа. Виписати прототипи функцій на початку програми.

int substr(int a);
double substr(double a);
int long substr(int long a);

int main() { 
cout<<substr(5)<<endl;
cout<<substr(3)<<endl;
cout<<substr(2.5)<<endl;
}

int substr(int a){
return a*a;
}

double substr(double a){
return a*a;
}

int long substr(int long a){
return a*a;
}