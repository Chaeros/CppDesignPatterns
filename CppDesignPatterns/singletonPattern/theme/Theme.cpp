#include "Theme.h"
#include <string>

std::string Theme::getThemeColor() {
	return themeColor;
}

void Theme::setThemeColor(std::string themeColor) {
	Theme::themeColor = themeColor;
}