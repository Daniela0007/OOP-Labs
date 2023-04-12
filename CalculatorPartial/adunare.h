#pragma once
#include "Operatie.h"
class adunare : public Operatie
{
public:
	adunare();
	int Compute(int a, int b) override;
};

