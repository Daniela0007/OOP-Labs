#include "Opel.h"

void Opel::setCapacitate(int capacity)
{
	capacitate = capacity;
}

void Opel::setCuloare(string color)
{
	culoare = color;
}

void Opel::setAnFabricatie(int an)
{
	anFabricatie = an;
}

int Opel::getAnFabricatie()
{
	return anFabricatie;
}

int Opel::getCapacitate()
{
	return capacitate;
}

string Opel::getCuloare()
{
	return culoare;
}

string Opel::getName()
{
	return "Opel";
}
