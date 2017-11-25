#pragma once
//alternatywnie tablica dwuwymiarowa, wiersz z odlwoda + wiersz z odlladem
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

