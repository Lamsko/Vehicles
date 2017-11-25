#pragma once
class Punkt
{
public:
	Punkt();
	~Punkt();
	
	void setLos();
	int getOdlLad();
	int getOdlWoda();

private:
	int odlLad, odlWoda;
};

