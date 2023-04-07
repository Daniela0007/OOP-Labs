#ifndef COUNTVOWELS_H
#define COUNTVOWELS_H

#include <iostream>
#include "Hash.h"

class CountVowelsHash : public Hash
{
private:
	int nr_vowels;
public :
	CountVowelsHash();
	int compute(const char*) override;
};

#endif