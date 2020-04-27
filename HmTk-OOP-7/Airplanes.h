#pragma once
#include"Header.h"

class Airplanes
{
	int Seats;
	int Amount_of_passengers;

public:

	Airplanes();
	Airplanes(int Seats, int Passengers);
	Airplanes(const Airplanes &Pln);

	bool operator==(const Airplanes &Pln);

	Airplanes &operator++();
	Airplanes &operator--();

	bool operator>(const Airplanes &Pln);

	void ShowValues();
	~Airplanes();
};

