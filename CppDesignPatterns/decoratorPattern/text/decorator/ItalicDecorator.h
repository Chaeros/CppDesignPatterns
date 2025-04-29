#pragma once
#include "TextDecorator.h"

class ItalicDecorator : public TextDecorator {
public:
	ItalicDecorator(Text* text);
	std::string getContent() override;
};