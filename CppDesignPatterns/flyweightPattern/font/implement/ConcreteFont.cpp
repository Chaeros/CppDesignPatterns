#include "ConcreteFont.h"
#include <iostream>

void ConcreteFont::apply(std::string text) {
	std::cout << "Text: " << text << std::endl;
	std::cout << "Font: " << font << std::endl;
	std::cout << "Size: " << size << std::endl;
	std::cout << "Color: " << color << std::endl;
}