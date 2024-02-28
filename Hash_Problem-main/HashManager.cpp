#include "HashManager.h"


HashManager::HashManager(int initial_size)
{
	this->hashes_ = new Hash * [initial_size];
	this->size = initial_size;
	last = 0;
	///size ++
}

Hash& HashManager::operator[](const char* type_hash)
{
	return *hashes_[last++];
}

void HashManager::print_hashes(const char* string)
{
	for (int i = 0; i < last; i++)
		std::cout << hashes_[i]->compute(string) << "\n";
}