#include "Header.h"
#include "Airplanes.h"

int main()
{
	Airplanes A(300, 280);
	Airplanes B(25, 5);
	Airplanes C(25, 5);


	++A;
	A.ShowValues();

	if (B == C) {
		std::cout << "Airplanes are equal" << std::endl;
	}
	else
		std::cout << "Airplanes are not equal" << std::endl;

	if (A > B) {
		std::cout << "First Airplane are bigger" << std::endl;
	}
	else { std::cout << "Second Airplane are bigger" << std::endl;
	}
	--C;
	C.ShowValues();
}
