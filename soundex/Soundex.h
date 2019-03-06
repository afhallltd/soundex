#pragma once
#include <string>

class Soundex
{
public:
	__declspec(dllexport) void dummy(void) {}
	__declspec(dllexport) const std::string encode(const std::string& s);
};

