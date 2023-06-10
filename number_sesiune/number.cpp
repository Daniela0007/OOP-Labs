#include "number.h"
#include <iostream>

Number::Number(int value)
{
	number = value;
	count = 0;
	for (int i = 0; i < 100; i++)
		printers[i] = 0;
}

Number::operator int()
{
	return this->number;
}

Number Number::operator+(const Number& n)
{
	// TODO: insert return statement here
	Number c(this->number + n.number);
	return c;
}

Number Number::operator-(const Number& n)
{
	Number c(this->number - n.number);
	return c;
}

Number Number::operator*(const Number& n)
{
	Number c(this->number * n.number);
	return c;
}

Number Number::operator/(const Number& n)
{
	Number c(this->number / n.number);
	return c;
}

Number& Number::operator+=(Printer* prnt)
{
	printers[count++] = prnt;
	return *this;
}

void Number::Print()
{
	for (int i = 0; i < count; i++)
		std::cout << printers[i]->GetFormatName() << printers[i]->FormatNumber(number) << std::endl;
}
