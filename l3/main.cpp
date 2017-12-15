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
	
		
	Car c1("Aston Martin");
	cout << c1.getNazwa() << endl;

	Boat b1("Kajak");
	cout << b1.getNazwa() << endl;

	Amphibian a1("Ferrari 410 SuperAmerica");
	cout << a1.getNazwa() << endl;

	return 0;
}

