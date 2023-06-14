#include "DreptunghiRotit.h"

void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi)
{
	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
	this->unghi = unghi;

}

void DreptunghiRotit::Paint()
{
	std::cout << "dreptunghi(" << x
		<< "," << y << "," << lungime << "," << latime << ")" <<
		" rotit la " << unghi << " de grade\n";
}
