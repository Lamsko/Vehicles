#pragma once
#include "Vehicle.h"

class Car : public virtual Vehicle
{
public:
	Car();
	~Car();
	int getOdleglosc();
};

