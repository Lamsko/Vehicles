#include "stdafx.h"
#include "Amphibian.h"
#include <iostream>

using namespace std;

Amphibian::Amphibian()
{
	plywa, jedzi = true;
}

Amphibian::Amphibian(string n) : Vehicle(n)
{
	plywa = true;
	jedzi = true;
}

Amphibian::~Amphibian()
{
}

int Amphibian::getOdleglosc()
{
	return 0;
}
