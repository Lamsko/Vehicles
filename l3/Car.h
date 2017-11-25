#pragma once
#include "Vehicle.h"

class Car : public virtual Vehicle
{
public:
	Car();
	Car(string n);
	~Car();
	int getOdleglosc();
};

