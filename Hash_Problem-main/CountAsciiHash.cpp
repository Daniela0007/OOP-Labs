#include "CountAsciiHash.h"

CountAsciiHash::CountAsciiHash()
{
    nume_hash = "CountAsciiHash";
    sum_ascii = 0;
}

int CountAsciiHash::compute(const char* string)
{
    int len = 0;
    while (string[len] != '\0')
    {
        sum_ascii += (int)string[len];
        len++;
    }
    return sum_ascii;
}
