#include "Button.h"
#include "../theme/Theme.h"
#include <iostream>

void Button::display() {
	std::string themeColor = Theme::getInstance().getThemeColor();
	std::cout << "Button [" << label << "] displayed in " << themeColor << " theme." << std::endl;
}