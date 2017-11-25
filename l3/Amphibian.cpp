#include "stdafx.h"
#include "Amphibian.h"
#include <iostream>

using namespace std;


Amphibian::Amphibian()
{
	plywa = true;
	jedzi = true;
	nazwa = "amfibia";
}

Amphibian::Amphibian(string n)
{
	plywa = true;
	jedzi = true;
	nazwa = n;
}


Amphibian::~Amphibian()
{
}

int Amphibian::getOdleglosc()
{
	return 0;
}
