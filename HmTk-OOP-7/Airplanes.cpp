#include "Airplanes.h"

Airplanes::Airplanes()
{
}

Airplanes::Airplanes(int _seats, int _amount) : Seats(_seats),Amount_of_passengers(_amount)
{
}

Airplanes::Airplanes(const Airplanes & Pln) :Airplanes(Pln.Seats, Pln.Amount_of_passengers)
{
}

bool Airplanes::operator==(const Airplanes & Pln)
{
	return Seats == Pln.Seats ? true : false;
}

Airplanes & Airplanes::operator++()
{
	Amount_of_passengers++;
	return *this;
}

Airplanes & Airplanes::operator--()
{
	Amount_of_passengers--;
	return *this;
}

bool Airplanes::operator>(const Airplanes & Pln)
{
	return Seats > Pln.Seats ? true : false;
}



void Airplanes::ShowValues()
{
	std::cout << "Amount of Seats: " << Seats << std::endl;
	std::cout << "Amount of Passengers: " << Amount_of_passengers << std::endl;
	std::cout << std::endl;
}

Airplanes::~Airplanes()
{
}
