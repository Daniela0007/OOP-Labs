#include "Hexazecimal.h"

string Hexazecimal::GetFormatName()
{
    string ans;
    ans = "Format: Hexazecimal ";
    return ans;
}

string Hexazecimal::FormatNumber(int number)
{
    std::stringstream ans;
    ans << std::hex << number;
    return ans.str();
}
