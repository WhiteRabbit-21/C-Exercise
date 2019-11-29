#include <iostream>
using namespace std;

int main() {
	//2.	Користувач вводить вагу 4-х монет, з яких одна фальшива і відрізняється по вазі. Визначити, яка монета фальшива за найменшу кількість порівнянь. Алгоритм має бути оптимальним.
	int a, b, c, d;
	cout << "Enter a,b,c,d";
	cin >> a >> b >> c >> d;
	if (a == b)
	{
		if (c > a || c < a)
			cout << "c is failed" << endl;
		else
			cout << "d is failed" << endl;
	}
	if (c == d)
	{
		if (a > c || a < c)
			cout << "a is failed" << endl;
		else cout << "b is failed" << endl;
	}
	//оптимальніше не зробити
}
