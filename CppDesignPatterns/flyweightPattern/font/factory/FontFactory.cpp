#include "FontFactory.h"
#include "../implement/ConcreteFont.h"
#include "../interface/Font.h"
#include <iostream>

std::unordered_map<std::string, std::shared_ptr<Font>> FontFactory::fontMap;

std::shared_ptr<Font> FontFactory::getFont(
	const std::string& font, 
	int size, 
	const std::string& color) {
	std::string key = font + "#" + std::to_string(size) + "#" + color;

	auto it = fontMap.find(key);
	if (it != fontMap.end()) {
		std::cout << "Exist font : " << key << std::endl;
		return it->second;
	}

	auto cFont = std::make_shared<ConcreteFont>(font, size, color);
	fontMap[key] = cFont;
	std::cout << "Creating font : " << key << std::endl;
	return cFont;
}