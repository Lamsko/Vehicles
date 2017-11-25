#pragma once
#include "Vehicle.h"

class Boat : public virtual Vehicle
{
public:
	Boat();
	Boat(string n);
	~Boat();
	int getOdleglosc();
};

