#ifndef EASYHASH_H
#define EASYHASH_H

#include <iostream>
#include "Hash.h"

class EasyHash : public Hash
{
private:
	int sum_ascii_special;
public : 
	EasyHash();
	int compute(const char*) override;
};

#endif