#pragma once
#include <string>

class Theme {
private:
	std::string themeColor;
	Theme():themeColor("light"){}
	Theme(const Theme&) = delete;
	Theme& operator=(const Theme&) = delete;

public:
	static Theme& getInstance() {
		static Theme instance;
		return instance;
	}

	std::string getThemeColor();
	void setThemeColor(std::string themeColor);
};