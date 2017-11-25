// l3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "Amphibian.h"
#include "Punkt.h"
#include <iostream>
#include <time.h>
#include <string>

using namespace std;


int main()
{
	Punkt p1, p2, p3;
	Car c1;
	string s = "ferrari";
	Car c2(s);
	Boat b1;
	Amphibian a1;
		
	cout << p1.getOdlLad() << " " << p1.getOdlWoda() << " " << p2.getOdlLad() << " " << p2.getOdlWoda() << endl;

	return 0;
}

