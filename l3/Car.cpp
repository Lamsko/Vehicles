#include "stdafx.h"
#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() : Vehicle()
{
	jedzi = true;
}

Car::Car(string n) : Vehicle(n)
{
	jedzi = true;
}

Car::~Car()
{
}

int Car::getOdleglosc()
{
	return 0;
}
