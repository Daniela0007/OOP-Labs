#pragma once
class Operatie
{
protected:
	const char* name_operation;
	int a, b;
public:
	const char* GetName() { return name_operation; };
	virtual int Compute(int, int) = 0;
};