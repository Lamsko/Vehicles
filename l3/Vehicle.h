#pragma once
#include <string>

class Vehicle
{
public:
	Vehicle();
	Vehicle(string n);
	~Vehicle();
	virtual int getOdleglosc() = 0;
	
	string getNazwa();

private:
	string nazwa;
	bool jedzi, plywa;
};

