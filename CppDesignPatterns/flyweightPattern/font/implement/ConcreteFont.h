#pragma once
#include "../interface/Font.h"

class ConcreteFont : public Font {
private:
	std::string font;
	int size;
	std::string color;
public:
	ConcreteFont(std::string font, int size, std::string color)
		:font(font), size(size), color(color) {
	}
	void apply(std::string text) override;
};