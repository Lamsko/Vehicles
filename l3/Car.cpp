#include "stdafx.h"
#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	jedzi = true;
	nazwa = "samochod";
}

Car::Car(string n)
{
	jedzi = true;
	nazwa = n;
}


Car::~Car()
{
}

int Car::getOdleglosc()
{
	return 0;
}
