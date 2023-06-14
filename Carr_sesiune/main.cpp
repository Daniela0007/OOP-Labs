#include <iostream>
#include "Opel.h"
#include "MasinaOras.h"
#include "Dacia.h"
#include  "Masina.h"
#include "SUV.h"
#include "RangeRover.h"
using namespace std;

int main()
{
	Opel o;
	o.setCapacitate(100);
	o.setCuloare("rosu");
	o.setAnFabricatie(2000);

	MasinaOras* m = &o;
	cout << m->getName() << "," <<
		m->getCuloare() << "," <<
		m->getCapacitate() << ", " <<
		o.getAnFabricatie() << endl;

	return 1;
}