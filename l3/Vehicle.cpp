#include "stdafx.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle()
{
	nazwa = "Wehiku�";
}

Vehicle::Vehicle(string n)
{
	nazwa = n;
}




Vehicle::~Vehicle()
{
}

string Vehicle::getNazwa()
{
	return nazwa;
}


