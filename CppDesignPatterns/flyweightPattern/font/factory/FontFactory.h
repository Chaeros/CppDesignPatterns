#pragma once
#include <unordered_map>
#include <memory>
#include "../interface/Font.h"

class FontFactory {
private:
	static std::unordered_map<std::string, std::shared_ptr<Font>> fontMap;
public:
	static std::shared_ptr<Font> getFont(const std::string& font, int size, const std::string& color);
};