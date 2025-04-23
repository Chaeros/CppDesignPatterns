#pragma once
#include <string>

class Font {
public:
	virtual void apply(std::string text) = 0;
};