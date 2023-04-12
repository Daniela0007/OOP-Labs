#pragma once
#include "Operatie.h"
class impartire : public Operatie
{
public:
	impartire();
	int Compute(int a, int b) override;
};

