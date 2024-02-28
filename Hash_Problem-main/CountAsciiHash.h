#ifndef COUNTASCII_H
#define COUNTASCII_H

#include <iostream>
#include "Hash.h"

class CountAsciiHash : public Hash
{
private:
	int sum_ascii;
public:
	CountAsciiHash();
	int compute(const char*) override;
};

#endif