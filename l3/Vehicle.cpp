#include "stdafx.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() : nazwa("Wehiku³"), jedzi(false), plywa(false)
{
}

Vehicle::Vehicle(string n) : nazwa(n), jedzi(false), plywa(false)
{
}




Vehicle::~Vehicle()
{
}

string Vehicle::getNazwa()
{
	return nazwa;
}


