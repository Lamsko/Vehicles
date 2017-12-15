#include "stdafx.h"
#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat() : Vehicle()
{
	plywa = true;
}

Boat::Boat(string n) : Vehicle(n)
{
	plywa = true;
}

Boat::~Boat()
{
}

int Boat::getOdleglosc()
{
	return 0;
}
