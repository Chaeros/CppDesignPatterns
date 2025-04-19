#include "Label.h"
#include "../theme/Theme.h"
#include <iostream>

void Label::display() {
	std::string themeColor = Theme::getInstance().getThemeColor();
	std::cout << "Label [" << label << "] displayed in " << themeColor << " theme." << std::endl;
}