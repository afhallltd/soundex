// soundex.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Soundex.h"

const std::string Soundex::encode(const std::string & s)
{
	return s + "000";
}
