#pragma once
#include "adunare.h"
#include "inmultire.h"
#include "impartire.h"
#include "scadere.h"
#include <iostream>
class calculator
{
private:
	Operatie** operatii_;
	int last;
	int size;
public:
	calculator(int initial_size = 5);
	void operator+=(Operatie*);
	void operator-=(const char*);
	void Compute();
	operator int();
	void Compute(int, int);
	bool operator[](const char*);
};

