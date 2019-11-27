#include <iostream>
#include <math.h>
using namespace std;
//71.	Починаючи з деякого моменту часу пройшло k повних секунд. Визначити, скільки пройшло повних діб, годин, хвилин та секунд..
int main() {

	int ksec;
	cout << "Enter count of seconds: ";
	cin >> ksec;

	int sut = ksec / 86400;
    
	int chas = (ksec % 86400) / 3600;
    
	int min = ((ksec % 86400) % 3600) / 60;
    
	int sec = ((ksec % 86400) % 3600) % 60;
    
	cout << "Time: " << sut << " дней:" << chas << " часов: " << min << " минут: " << sec << " секунд" << endl;

    
    
}


