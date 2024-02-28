#ifndef COUNTCONSONANT_H
#define COUNTCONSONANT_H

#include <iostream>
#include "Hash.h"

class CountConsonantHash : public Hash
{
private:
	int nr_consonants;
public:
	CountConsonantHash();
	int compute(const char*) override;
};

#endif