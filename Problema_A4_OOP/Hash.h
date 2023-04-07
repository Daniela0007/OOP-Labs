#ifndef HASH_H
#define HASH_H

class Hash
{
protected:
	const char* nume_hash;
public:
	//Hash(const char* name) { nume_hash = name; }
	virtual int compute(const char * ) = 0;
	//void SetName(const char* s) { nume_hash = s; }
	const char* GetName() { return nume_hash; }
};

#endif // !HASH_H