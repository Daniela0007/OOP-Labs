#include "calculator.h"

calculator::calculator(int initial_size)
{
	operatii_ = new Operatie * [initial_size];
	last = 0;
	size = initial_size;
}

void calculator::operator+=(Operatie* op)
{
	if (last == size)
	{
		return;
	}
	for (int i = 0; i < last; i++)
		if (operatii_[i]->GetName() == op->GetName())
			return;
	operatii_[last++] = op;
}

void calculator::operator-=(const char* op)
{
	int i;
	for (i = 0; i < last; i++)
		if (operatii_[i]->GetName() == op)
			break;
	delete operatii_[i];
	for (int j = i; j < last - 1; j++)
		operatii_[j] = operatii_[j + 1];
	last--;
}

calculator::operator int()
{
	return last;
}

void calculator::Compute(int a, int b)
{
	for (int i = 0; i < last; i++)
	{
		std::cout << operatii_[i]->GetName() << "(";
		std::cout << a << "," << b << ")" << " " << "=" << " ";
		std::cout << operatii_[i]->Compute(a, b) << "\n";
	}
}

bool calculator::operator[](const char* op)
{
	for (int i = 0; i < last; i++)
		if (operatii_[i]->GetName() == op)
			return 1;
	return 0;
}


