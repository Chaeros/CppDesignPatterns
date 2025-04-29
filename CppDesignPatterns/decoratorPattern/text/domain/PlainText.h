#pragma once
#include "Text.h"
#include <string>

class PlainText : public Text {
private:
	std::string content;
public:
	PlainText(std::string content);
	std::string getContent() override;
};