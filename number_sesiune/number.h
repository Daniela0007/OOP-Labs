#pragma once
#include "Printer.h"
class Number
{
	int number;
	int count;
	Printer* printers[100];
public:
	Number(int value);
	operator int();
	Number operator +(const Number& n);
	Number operator -(const Number& n);
	Number operator *(const Number& n);
	Number operator /(const Number& n);
	Number& operator +=(Printer* prnt);
	void Print();
};

