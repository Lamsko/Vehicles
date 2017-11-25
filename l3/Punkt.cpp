#include "stdafx.h"
#include "Punkt.h"
#include <cstdlib>
#include <time.h>

using namespace std;
Punkt::Punkt()
{
	setLos();
}


Punkt::~Punkt()
{
}

void Punkt::setLos()
{
	srand(time(NULL));
	odlLad = rand() % 999;
	odlWoda = rand() % 999;
}

int Punkt::getOdlLad()
{
	return odlLad;
}

int Punkt::getOdlWoda()
{
	return odlWoda;
}
