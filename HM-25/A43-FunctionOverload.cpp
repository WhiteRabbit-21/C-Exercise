#include <iostream>
using namespace std;
//43.	Реалізувати перегрузку функції "Середнє значення" з двома і трьома параметрами, яка б рахувала середнє значення параметрів.
double MidleRange(double a,double b);
double MidleRange(double a,double b,double c);

int main() {
double x;
cout<<"Enter x ";
cin>>x;

double y;
cout<<"Enter y ";
cin>>y;

double z;
cout<<"Enter z ";
cin>>z;

 cout<<"Midle Range is "<<MidleRange(x,y);
 cout<<endl;
 cout<<"Midle Range is "<<MidleRange(x,y,z);
}

double MidleRange(double a,double b){
return(a+b)/2;
}
double MidleRange(double a,double b,double c){
return(a+b+c)/3;
}
