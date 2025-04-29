#pragma once
#include "TextDecorator.h"

class BoldDecorator : public TextDecorator {
public:
	BoldDecorator(Text* text);
	std::string getContent() override;
};