#pragma once
#include "../domain/Text.h"

class TextDecorator : public Text {
protected:
	Text* decoratedText;
public:
	TextDecorator(Text* text);
	std::string getContent() override;
	~TextDecorator();
};