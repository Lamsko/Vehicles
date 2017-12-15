#pragma once
#include <string>

using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(string n);
	~Vehicle();
	virtual int getOdleglosc() = 0;	
	string getNazwa();

protected:
	string nazwa; //alternatywnie numer seryjny
	bool jedzi, plywa;
};

