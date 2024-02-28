
#include "Hash.h"
#include <iostream>
class HashManager
{
private:
	int last;
	int size;
	Hash** hashes_;
	int nr_hashes;
public:
	HashManager(int initial_size = 4);
	Hash& operator[] (const char*);
	void print_hashes(const char *);

};

