#include "Decimal.h"

string Decimal::GetFormatName()
{
    string ans = "Format: Decimal ";
    return ans;
}

string Decimal::FormatNumber(int number)
{
    string ans = to_string(number);
    return ans;
}
