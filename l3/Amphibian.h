#pragma once
#include "Car.h"
#include "Boat.h"

class Amphibian : public Car, public Boat
{
public:
	Amphibian();
	Amphibian(string n);
	~Amphibian();
	int getOdleglosc();
};

