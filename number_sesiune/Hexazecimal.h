#pragma once
#include "Printer.h"
#include <sstream>
class Hexazecimal : public Printer
{
	 string GetFormatName() ;
	 string FormatNumber(int number) ;
};

