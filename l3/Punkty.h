#pragma once
class Punkty
{
public:
	Punkty();
	~Punkty();
	
	void losowy();
	int getOdlLad();
	int getOdlWoda();

private:
	int odlLad, odlWoda;
};

