#include "stdafx.h"
#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	cout << "Konstruktor Car" << endl;
}

Car::Car(string n)
{
	nazwa = n;
}


Car::~Car()
{
}

int Car::getOdleglosc()
{
	return 0;
}
