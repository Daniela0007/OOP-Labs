#include "calculator.h"

int main()
{
	calculator c;
	c += new adunare();
	c += new scadere();
	c += new adunare(); // NU se mai adauga inca o operatie de adunare
	c += new inmultire();
	c += new impartire();
	std::cout << "Numar operatii suportate: " << (int)c << std::endl;
	c.Compute(20, 10);
	if (c["Scadere"])
		std::cout << "Operatia de scadere este suportata de calculator" <<
		std::endl;
	c -= "Scadere";
	c -= "Impartire";
	c.Compute(15, 6);
	std::cout << "Numar operatii suportate: " << (int)c << std::endl;
	return 0;
}