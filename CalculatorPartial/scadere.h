#pragma once
#include "Operatie.h"
class scadere : public Operatie
{
public:
	scadere();
	int Compute(int a, int b) override;
};

