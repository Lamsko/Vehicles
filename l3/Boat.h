#pragma once
#include "Vehicle.h"

class Boat : public virtual Vehicle
{
public:
	Boat();
	~Boat();
	int getOdleglosc();
};

