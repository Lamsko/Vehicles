#include "stdafx.h"
#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat()
{
	plywa = true;
	nazwa = "lodka";
}

Boat::Boat(string n)
{
	plywa = true;
	nazwa = n;
}


Boat::~Boat()
{
}

int Boat::getOdleglosc()
{
	return 0;
}
