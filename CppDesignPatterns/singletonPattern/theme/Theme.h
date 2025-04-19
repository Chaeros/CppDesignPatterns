#pragma once
#inclue <cstring>

class Theme {
private:
	static Theme instance;
	std::string themeColor;
	Theme():themeColor("light"){}

public:
	static Theme getInstance() {
		if (instance == null) {
			instance = new Theme();
		}
		return instance;
	}

	std::string getThemeColor();

	void setThemeColor(std::string themeColor);
};