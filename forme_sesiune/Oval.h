#pragma once
#include "Forma.h"
#include <iostream>
class Oval : public Forma
{
	int x;
	int y;
	int raza1;
	int raza2;
public:
	void set(int x, int y, int raza1, int raza2);
	void Paint();
};

