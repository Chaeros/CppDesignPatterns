#pragma once
#include "TextDecorator.h"

class UnderlineDecorator : public TextDecorator {
public:
	UnderlineDecorator(Text* text);
	std::string getContent() override;
};